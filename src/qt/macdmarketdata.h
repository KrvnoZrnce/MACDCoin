#ifndef MACDMARKETDATA_H
#define MACDMARKETDATA_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>

namespace Ui {
class MacdMarketData;
}

class MacdMarketData : public QWidget
{
    Q_OBJECT

public:
    explicit MacdMarketData(QWidget *parent = 0);
    ~MacdMarketData();

private:
    Ui::MacdMarketData *ui;

    void paintEvent(QPaintEvent *);

    void setBittrexManager();
    void updateOverview();
    void updateOrders();
    void setBuyTableViewModel(QStringList q, QStringList r);
    void setSellTableViewModel(QStringList q, QStringList r);
    void setHistoryTableViewModel(QStringList d, QStringList t, QStringList r, QStringList u, QStringList c);

    QNetworkAccessManager* nam;

    void getOrderBook();
    void getHistory();

private slots:
    void finishedSlot(QNetworkReply* reply);
    void getOverview();
};

#endif // MACDMARKETDATA_H
