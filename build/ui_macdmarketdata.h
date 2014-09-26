/********************************************************************************
** Form generated from reading UI file 'macdmarketdata.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACDMARKETDATA_H
#define UI_MACDMARKETDATA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MacdMarketData
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QFrame *topFrame;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_3;
    QLabel *label;
    QLabel *lastValue;
    QLabel *label_5;
    QLabel *bidValue;
    QLabel *label_7;
    QLabel *askValue;
    QFormLayout *formLayout_4;
    QLabel *label_3;
    QLabel *highValue;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *lowValue;
    QLabel *btcVolValue;
    QLabel *macdVolValue;
    QHBoxLayout *horizontalLayout_4;
    QTableView *buyTableView;
    QTableView *sellTableView;
    QWidget *tab_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTableView *historyTableView;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MacdMarketData)
    {
        if (MacdMarketData->objectName().isEmpty())
            MacdMarketData->setObjectName(QString::fromUtf8("MacdMarketData"));
        MacdMarketData->resize(821, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MacdMarketData->sizePolicy().hasHeightForWidth());
        MacdMarketData->setSizePolicy(sizePolicy);
        MacdMarketData->setStyleSheet(QString::fromUtf8("#MacdMarketData{background-image: url(:/images/base_back); background-color:red;}\n"
"QWidget{background-color:none;}"));
        tabWidget = new QTabWidget(MacdMarketData);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 801, 581));
        tabWidget->setStyleSheet(QString::fromUtf8(" QTabWidget::tab-bar  {\n"
"        left: 5px; /* move to the right by 5px */\n"
"color:white;\n"
"    }\n"
"     \n"
"QTabWidget::pane  {\n"
"border:0;\n"
"        background:transparent;\n"
"    }\n"
"\n"
"    /* Style the tab using the tab sub-control. Note that\n"
"        it reads QTabBar _not_ QTabWidget */\n"
"    QTabBar::tab  {\n"
"        background: rgba(27, 40, 54,0);\n"
"        min-width: 8ex;\n"
"color:white;\n"
"    }\n"
"     \n"
"    QTabBar::tab:selected, QTabBar::tab:hover  {\n"
"        background:  rgba(27, 40, 54,0);\n"
"    }\n"
"     \n"
"    QTabBar::tab:selected  {\n"
"        border-top-color: rgba(37, 170, 225, 255);\n"
"		border-top-style:solid;\n"
"		border-top-width:1px; /* same as pane color */\n"
"color:white;\n"
"    }\n"
" QTabWidget::tab-bar  {\n"
"        left: 5px; /* move to the right by 5px */\n"
"color:white;\n"
"    }\n"
"     \n"
"    /* Style the tab using the tab sub-control. Note that\n"
"        it reads QTabBar _not_ QTabWidget */\n"
"    QTabBar::tab  {\n"
"   "
                        "     background: rgba(27, 40, 54,0);\n"
"        min-width: 8ex;\n"
"color:white;\n"
"    }\n"
"     \n"
"    QTabBar::tab:selected, QTabBar::tab:hover  {\n"
"        background:  rgba(27, 40, 54,0);\n"
"    }\n"
"     \n"
"    QTabBar::tab:selected  {\n"
"        border-top-color: rgba(37, 170, 225, 255);\n"
"		border-top-style:solid;\n"
"		border-top-width:1px; /* same as pane color */\n"
"color:white;\n"
"    }\n"
"\n"
""));
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setStyleSheet(QString::fromUtf8(""));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 781, 531));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        topFrame = new QFrame(verticalLayoutWidget);
        topFrame->setObjectName(QString::fromUtf8("topFrame"));
        topFrame->setStyleSheet(QString::fromUtf8("#topFrame{\n"
"border-bottom-color:rgb(37, 170, 225);\n"
"border-bottom-style:solid;\n"
"border-bottom-width:1px;\n"
"border-top-color:rgb(37, 170, 225);\n"
"border-top-style:solid;\n"
"border-top-width:1px;\n"
"}"));
        gridLayout_2 = new QGridLayout(topFrame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setContentsMargins(6, 19, 6, 6);
        label = new QLabel(topFrame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Khmer OS System"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:white;"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label);

        lastValue = new QLabel(topFrame);
        lastValue->setObjectName(QString::fromUtf8("lastValue"));
        lastValue->setFont(font);
        lastValue->setStyleSheet(QString::fromUtf8("color:white;"));
        lastValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lastValue);

        label_5 = new QLabel(topFrame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color:white;"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_5);

        bidValue = new QLabel(topFrame);
        bidValue->setObjectName(QString::fromUtf8("bidValue"));
        bidValue->setFont(font);
        bidValue->setStyleSheet(QString::fromUtf8("color:white;"));
        bidValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, bidValue);

        label_7 = new QLabel(topFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color:white;"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_7);

        askValue = new QLabel(topFrame);
        askValue->setObjectName(QString::fromUtf8("askValue"));
        askValue->setFont(font);
        askValue->setStyleSheet(QString::fromUtf8("color:white;"));
        askValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, askValue);


        gridLayout_2->addLayout(formLayout_3, 0, 0, 1, 1);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(-1, 1, -1, -1);
        label_3 = new QLabel(topFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_3);

        highValue = new QLabel(topFrame);
        highValue->setObjectName(QString::fromUtf8("highValue"));
        highValue->setFont(font);
        highValue->setStyleSheet(QString::fromUtf8("color:white;"));
        highValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, highValue);

        label_9 = new QLabel(topFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("color:white;"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(topFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("color:white;"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(topFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("color:white;"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_11);

        lowValue = new QLabel(topFrame);
        lowValue->setObjectName(QString::fromUtf8("lowValue"));
        lowValue->setFont(font);
        lowValue->setStyleSheet(QString::fromUtf8("color:white;"));
        lowValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lowValue);

        btcVolValue = new QLabel(topFrame);
        btcVolValue->setObjectName(QString::fromUtf8("btcVolValue"));
        btcVolValue->setFont(font);
        btcVolValue->setStyleSheet(QString::fromUtf8("color:white;"));
        btcVolValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, btcVolValue);

        macdVolValue = new QLabel(topFrame);
        macdVolValue->setObjectName(QString::fromUtf8("macdVolValue"));
        macdVolValue->setFont(font);
        macdVolValue->setStyleSheet(QString::fromUtf8("color:white;"));
        macdVolValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout_4->setWidget(3, QFormLayout::FieldRole, macdVolValue);


        gridLayout_2->addLayout(formLayout_4, 0, 1, 1, 1);


        verticalLayout_3->addWidget(topFrame);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 6, 6, 6);
        buyTableView = new QTableView(verticalLayoutWidget);
        buyTableView->setObjectName(QString::fromUtf8("buyTableView"));
        buyTableView->setStyleSheet(QString::fromUtf8("#buyTableView{\n"
"gridline-color: rgba(1, 1, 1, 0);\n"
"background-color:rgba(1, 1, 1, 0);\n"
"border-color:rgba(1, 1, 1, 0);\n"
"border-width:0px;\n"
"border-style:solid;}"));
        buyTableView->setFrameShape(QFrame::NoFrame);
        buyTableView->setFrameShadow(QFrame::Plain);
        buyTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        buyTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        buyTableView->setShowGrid(false);
        buyTableView->setCornerButtonEnabled(false);
        buyTableView->horizontalHeader()->setDefaultSectionSize(190);
        buyTableView->horizontalHeader()->setMinimumSectionSize(190);
        buyTableView->horizontalHeader()->setStretchLastSection(true);
        buyTableView->verticalHeader()->setVisible(false);

        horizontalLayout_4->addWidget(buyTableView);

        sellTableView = new QTableView(verticalLayoutWidget);
        sellTableView->setObjectName(QString::fromUtf8("sellTableView"));
        sellTableView->setStyleSheet(QString::fromUtf8("#sellTableView{\n"
"gridline-color: rgba(1, 1, 1, 0);\n"
"background-color:rgba(1, 1, 1, 0);\n"
"border-color:rgba(1, 1, 1, 0);\n"
"border-width:0px;\n"
"border-style:solid;}"));
        sellTableView->setFrameShape(QFrame::NoFrame);
        sellTableView->setFrameShadow(QFrame::Plain);
        sellTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        sellTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        sellTableView->setShowGrid(false);
        sellTableView->horizontalHeader()->setDefaultSectionSize(190);
        sellTableView->horizontalHeader()->setMinimumSectionSize(190);
        sellTableView->verticalHeader()->setVisible(false);

        horizontalLayout_4->addWidget(sellTableView);


        verticalLayout_3->addLayout(horizontalLayout_4);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayoutWidget = new QWidget(tab_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 801, 551));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        historyTableView = new QTableView(gridLayoutWidget);
        historyTableView->setObjectName(QString::fromUtf8("historyTableView"));
        historyTableView->setStyleSheet(QString::fromUtf8("#historyTableView{\n"
"gridline-color: rgba(1, 1, 1, 0);\n"
"background-color:rgba(1, 1, 1, 0);\n"
"border-color:rgba(1, 1, 1, 0);\n"
"border-width:0px;\n"
"border-style:solid;}"));
        historyTableView->setFrameShape(QFrame::NoFrame);
        historyTableView->setFrameShadow(QFrame::Plain);
        historyTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        historyTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        historyTableView->setShowGrid(false);
        historyTableView->horizontalHeader()->setDefaultSectionSize(150);
        historyTableView->horizontalHeader()->setMinimumSectionSize(150);
        historyTableView->verticalHeader()->setVisible(false);

        gridLayout->addWidget(historyTableView, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        retranslateUi(MacdMarketData);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MacdMarketData);
    } // setupUi

    void retranslateUi(QWidget *MacdMarketData)
    {
        MacdMarketData->setWindowTitle(QApplication::translate("MacdMarketData", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MacdMarketData", "LAST", 0, QApplication::UnicodeUTF8));
        lastValue->setText(QApplication::translate("MacdMarketData", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MacdMarketData", "BID", 0, QApplication::UnicodeUTF8));
        bidValue->setText(QApplication::translate("MacdMarketData", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MacdMarketData", "ASK", 0, QApplication::UnicodeUTF8));
        askValue->setText(QApplication::translate("MacdMarketData", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MacdMarketData", "24HR HIGH", 0, QApplication::UnicodeUTF8));
        highValue->setText(QApplication::translate("MacdMarketData", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MacdMarketData", "24HR LOW", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MacdMarketData", "BTC VOLUME", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MacdMarketData", "MACD VOLUME", 0, QApplication::UnicodeUTF8));
        lowValue->setText(QApplication::translate("MacdMarketData", "TextLabel", 0, QApplication::UnicodeUTF8));
        btcVolValue->setText(QApplication::translate("MacdMarketData", "TextLabel", 0, QApplication::UnicodeUTF8));
        macdVolValue->setText(QApplication::translate("MacdMarketData", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MacdMarketData", "Summary", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MacdMarketData", "History", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MacdMarketData: public Ui_MacdMarketData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACDMARKETDATA_H
