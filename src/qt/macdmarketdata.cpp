#include "macdmarketdata.h"
#include "ui_macdmarketdata.h"
#include "qtimer.h"
#include <QtScript/QScriptEngine>
#include <QtScript/QScriptValueIterator>
#include <QDebug>
#include <QStandardItemModel>
#include <QPainter>

MacdMarketData::MacdMarketData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MacdMarketData)
{
    ui->setupUi(this);

    ui->historyTableView->setStyleSheet("QTableView{border-color:rgba(37, 170, 255, 255); border-width:1px; border-style:solid;background-color: rgba(27, 40, 54, 0);color:white; background-image:none; alternate-background-color: rgba(37, 170, 225, 10);} QHeaderView::section{background-image:none; background-color: rgb(37, 170, 225); text-transform:uppercase; color:white;}");
    ui->buyTableView->setStyleSheet("QTableView{border-color:rgba(37, 170, 255, 255); border-width:1px; border-style:solid;background-color: rgba(27, 40, 54, 0);color:white; background-image:none; alternate-background-color: rgba(37, 170, 225, 10);} QHeaderView::section{background-image:none; background-color: rgb(37, 170, 225); text-transform:uppercase; color:white;}");
    ui->sellTableView->setStyleSheet("QTableView{border-color:rgba(37, 170, 255, 255); border-width:1px; border-style:solid;background-color: rgba(27, 40, 54, 0);color:white; background-image:none; alternate-background-color: rgba(37, 170, 225, 10);} QHeaderView::section{background-image:none; background-color: rgb(37, 170, 225); text-transform:uppercase; color:white;}");
    /*ui->tabWidget->setStyleSheet(" QTabWidget::tab-bar  {
                                 left: 5px;
                         color:white;
                             }
                              
                         QTabWidget::pane  {
                                 background-color:rgba(27, 40, 54,0);
                             }
                         

                             QTabBar::tab  {
                                 background: rgba(27, 40, 54,0);
                                 min-width: 8ex;
                         color:white;
                             }
                              
                             QTabBar::tab:selected, QTabBar::tab:hover  {
                                 background:  rgba(27, 40, 54,0);
                             }
                              
                             QTabBar::tab:selected  {
                                 border-top-color: rgba(37, 170, 225, 255);
                                 border-top-style:solid;
                                 border-top-width:1px;
                         color:white;
                             }
                          QTabWidget::tab-bar  {
                                 left: 5px;
                         color:white;
                             }
                              

                             QTabBar::tab  {
                                 background: rgba(27, 40, 54,0);
                                 min-width: 8ex;
                         color:white;
                             }
                              
                             QTabBar::tab:selected, QTabBar::tab:hover  {
                                 background:  rgba(27, 40, 54,0);
                             }
                              
                             QTabBar::tab:selected  {
                                 border-top-color: rgba(37, 170, 225, 255);
                                 border-top-style:solid;
                                 border-top-width:1px;
                         color:white;
                             }
                         
");*/
    setBittrexManager();
}

void MacdMarketData::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

void MacdMarketData::setBittrexManager()
{
    nam = new QNetworkAccessManager(this);
    QObject::connect(nam, SIGNAL(finished(QNetworkReply*)),
             this, SLOT(finishedSlot(QNetworkReply*)));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(getOverview()));
    timer->start(60000);
}

void MacdMarketData::getOverview()
{
    QUrl url("https://bittrex.com/api/v1.1/public/getmarketsummary?market=btc-macd");
    QNetworkReply* reply = nam->get(QNetworkRequest(url));
}

void MacdMarketData::getOrderBook()
{
    QUrl url("https://bittrex.com/api/v1.1/public/getorderbook?market=BTC-MACD&type=both&depth=50");
    QNetworkReply* reply = nam->get(QNetworkRequest(url));
}

void MacdMarketData::getHistory()
{
    QUrl url("https://bittrex.com/api/v1.1/public/getmarkethistory?market=BTC-MACD&count=50");
    QNetworkReply* reply = nam->get(QNetworkRequest(url));
}

void MacdMarketData::finishedSlot(QNetworkReply* reply)
{
    // Reading attributes of the reply
    // e.g. the HTTP status code
    QVariant statusCodeV =
            reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    // Or the target URL if it was a redirect:
    QVariant redirectionTargetUrl =
            reply->attribute(QNetworkRequest::RedirectionTargetAttribute);

    if (reply->error() == QNetworkReply::NoError)
    {
        QByteArray bytes = reply->readAll();  // bytes
        QString string(bytes);

        if(reply->request().url().toString().contains("orderbook", Qt::CaseInsensitive))
        {
            QScriptValue value;
            QScriptEngine engine;
            value = engine.evaluate("(" + string + ")");

            if(value.property("result").property("buy").isObject()) {
                QScriptValue out = value.property("result").property("buy");

                int counter = 0;

                QScriptValueIterator it(out);

                QStringList quantityList;
                QStringList rateList;

                while (it.hasNext()) {
                    counter++;
                    it.next();
                    QScriptValue entry = it.value();

                    quantityList.append(QString::number(entry.property("Quantity").toNumber(), 'f', 8));
                    rateList.append(QString::number(entry.property("Rate").toNumber(), 'f', 8));

                }
                setBuyTableViewModel(quantityList, rateList);

            } else {
                //qDebug()<<"Invalid response: " << data;
                // fatal error
            }

            if(value.property("result").property("sell").isObject()) {
                QScriptValue out = value.property("result").property("sell");

                int counter = 0;

                QScriptValueIterator it(out);

                QStringList quantityList;
                QStringList rateList;

                while (it.hasNext()) {
                    counter++;
                    it.next();
                    QScriptValue entry = it.value();

                    quantityList.append(QString::number(entry.property("Quantity").toNumber(), 'f', 8));
                    rateList.append(QString::number(entry.property("Rate").toNumber(), 'f', 8));
                }

                getHistory();

                setSellTableViewModel(quantityList, rateList);

            } else {
                //qDebug()<<"Invalid response: " << data;
                // fatal error
            }
        }
        else if(reply->request().url().toString().contains("history", Qt::CaseInsensitive))
        {
            QScriptValue value;
            QScriptEngine engine;
            value = engine.evaluate("(" + string + ")");

            if(value.property("result").isObject()) {
                QScriptValue out = value.property("result");

                int counter = 0;

                QScriptValueIterator it(out);

                QStringList timestampList;
                QStringList typeList;
                QStringList rateList;
                QStringList unitsList;
                QStringList costList;

                while (it.hasNext()) {
                    counter++;
                    it.next();
                    QScriptValue entry = it.value();

                    timestampList.append(entry.property("TimeStamp").toString());
                    typeList.append(entry.property("OrderType").toString());
                    rateList.append(QString::number(entry.property("Price").toNumber(), 'f', 8));
                    unitsList.append(QString::number(entry.property("Quantity").toNumber(), 'f', 8));
                    costList.append(QString::number(entry.property("Total").toNumber(), 'f', 8));

                }
                setHistoryTableViewModel(timestampList, typeList, rateList, unitsList, costList);

            } else {
                //qDebug()<<"Invalid response: " << data;
                // fatal error
            }
        }
        else
        {
            QScriptValue value;
            QScriptEngine engine;
            value = engine.evaluate("(" + string + ")");

            if(value.property("result").isObject()) {
                QScriptValue out = value.property("result");

                int counter = 0;

                QScriptValueIterator it(out);
                while (it.hasNext()) {
                    counter++;
                    it.next();
                    QScriptValue entry = it.value();

                    if(counter == 1)
                    {
                        ui->lastValue->setText("    " + QString::number(entry.property("Last").toNumber(), 'f', 8) + " BTC");
                        ui->askValue->setText("    " + QString::number(entry.property("Ask").toNumber(), 'f', 8) + " BTC");
                        ui->bidValue->setText("    " + QString::number(entry.property("Bid").toNumber(), 'f', 8) + " BTC");
                        ui->lowValue->setText("    " + QString::number(entry.property("Low").toNumber(), 'f', 8) + " BTC");
                        ui->highValue->setText("    " + QString::number(entry.property("High").toNumber(), 'f', 8) + " BTC");
                        ui->btcVolValue->setText("    " + QString::number(entry.property("BaseVolume").toNumber(), 'f', 8) + " BTC");
                        ui->macdVolValue->setText("    " + QString::number(entry.property("Volume").toNumber(), 'f', 8) + " MACD");

                        getOrderBook();
                    }
                }

            } else {
                //qDebug()<<"Invalid response: " << data;
                // fatal error
            }
        }
    }
    else
    {
        // handle errors here
    }

    reply->deleteLater();
}

void MacdMarketData::setSellTableViewModel(QStringList q, QStringList r)
{
    q.removeLast();
    /* Create the data model */
    // 1. give it some headers
    QStandardItemModel* model = new QStandardItemModel(q.count(),2,this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("ASK (BTC)")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("QUANTITY (MACD)")));
    //model->setHorizontalHeaderItem(2, new QStandardItem(QString("Column 3")));
    //model->setHorizontalHeaderItem(3, new QStandardItem(QString("Column 4")));

    // 2. populate the model with the data

    for(int i = 0; i < q.count() ; i++)
    {
        model->setItem(i,1,new QStandardItem(q[i]));
        model->setItem(i,0,new QStandardItem(r[i]));
    }

    ui->sellTableView->setModel(model);
}

void MacdMarketData::setBuyTableViewModel(QStringList q, QStringList r)
{
    q.removeLast();
    /* Create the data model */
    // 1. give it some headers
    QStandardItemModel* model = new QStandardItemModel(q.count(),2,this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("QUANTITY (MACD)")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("BID (BTC)")));
    //model->setHorizontalHeaderItem(2, new QStandardItem(QString("Column 3")));
    //model->setHorizontalHeaderItem(3, new QStandardItem(QString("Column 4")));

    // 2. populate the model with the data

    for(int i = 0; i < q.count() ; i++)
    {
        model->setItem(i,0,new QStandardItem(q[i]));
        model->setItem(i,1,new QStandardItem(r[i]));
    }

    ui->buyTableView->setModel(model);
}

void MacdMarketData::setHistoryTableViewModel(QStringList d, QStringList t, QStringList r, QStringList u, QStringList c)
{
    d.removeLast();

    /* Create the data model */
    // 1. give it some headers
    QStandardItemModel* model = new QStandardItemModel(d.count(),2,this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("DATE")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("TYPE")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("RATE")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("UNITS (MACD)")));
    model->setHorizontalHeaderItem(4, new QStandardItem(QString("COST (BTC)")));

    // 2. populate the model with the data

    for(int i = 0; i < d.count() ; i++)
    {
        model->setItem(i,0,new QStandardItem(d[i]));
        model->setItem(i,1,new QStandardItem(t[i]));
        model->setItem(i,2,new QStandardItem(r[i]));
        model->setItem(i,3,new QStandardItem(u[i]));
        model->setItem(i,4,new QStandardItem(c[i]));

        model->item(i,1)->setTextAlignment(Qt::AlignCenter);

        if(t[i].contains(QString("buy"), Qt::CaseInsensitive))
        {
            model->item(i,1)->setForeground(QColor::fromRgb(37, 170, 225));
        }
    }

    ui->historyTableView->setModel(model);
    ui->historyTableView->resizeRowsToContents();
    ui->historyTableView->resizeColumnToContents(0);
    ui->historyTableView->horizontalHeader()->setStretchLastSection(true);

}

MacdMarketData::~MacdMarketData()
{
    delete ui;
}
