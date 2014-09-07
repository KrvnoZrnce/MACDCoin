/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelWalletStatus;
    QSpacerItem *verticalSpacer_2;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QLabel *label_6;
    QLabel *labelStake;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QFrame *line;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_3;
    QFormLayout *formLayout_3;
    QLabel *label_11;
    QLabel *inBTCvalue;
    QLabel *label_13;
    QLabel *inUSDvalue;
    QLabel *label_15;
    QLabel *inEURvalue;
    QLabel *label_12;
    QLabel *inCNYvalue;
    QSpacerItem *verticalSpacer;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *labelInfo;
    QFrame *horizontalFrame3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QFrame *line_2;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTransactionsStatus;
    QListView *listTransactions;
    QFrame *horizontalFrame2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLabel *labelNumTransactions;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(820, 600);
        OverviewPage->setMinimumSize(QSize(820, 600));
        OverviewPage->setMaximumSize(QSize(820, 600));
        OverviewPage->setAutoFillBackground(false);
        OverviewPage->setStyleSheet(QString::fromUtf8("#OverviewPage { color: #rgb(78, 187, 57);\n"
"background-image: url(:/images/base_back);}\n"
""));
        OverviewPage->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        horizontalLayout = new QHBoxLayout(OverviewPage);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(OverviewPage);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(297, 0));
        frame->setMaximumSize(QSize(297, 584));
        frame->setStyleSheet(QString::fromUtf8("#frame { background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0,0,0,10), stop:1.0 rgba(0,0,0,0)); }"));
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setFamily(QString::fromUtf8("Khmer OS"));
        font.setPointSize(13);
        font.setBold(false);
        font.setWeight(50);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: #ededed;"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        labelWalletStatus = new QLabel(frame);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(out of sync)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_2);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(12);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Khmer OS"));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        label->setIndent(10);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        labelBalance = new QLabel(frame);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Khmer OS"));
        font2.setBold(false);
        font2.setWeight(50);
        labelBalance->setFont(font2);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        labelBalance->setText(QString::fromUtf8("0 MACD"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setIndent(10);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelBalance);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        label_6->setIndent(10);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        labelStake = new QLabel(frame);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setFont(font2);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        labelStake->setText(QString::fromUtf8("0 MACD"));
        labelStake->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelStake->setIndent(10);
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelStake);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        label_3->setIndent(10);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(frame);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font2);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        labelUnconfirmed->setText(QString::fromUtf8("0 MACD"));
        labelUnconfirmed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelUnconfirmed->setIndent(10);
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(frame);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));
        labelImmatureText->setFont(font1);
        labelImmatureText->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        labelImmatureText->setIndent(10);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(frame);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setFont(font2);
        labelImmature->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        labelImmature->setText(QString::fromUtf8("0 MACD"));
        labelImmature->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelImmature->setIndent(10);
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelImmature);


        verticalLayout_4->addLayout(formLayout_2);


        verticalLayout_2->addWidget(frame);

        line = new QFrame(OverviewPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(16777215, 1));
        line->setStyleSheet(QString::fromUtf8("background-color:rgb(37, 170, 225);"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        verticalFrame = new QFrame(OverviewPage);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        verticalFrame->setMinimumSize(QSize(0, 180));
        verticalLayout_5 = new QVBoxLayout(verticalFrame);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
        label_10 = new QLabel(verticalFrame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 35));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Khmer OS System"));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color:white"));

        verticalLayout_5->addWidget(label_10);

        verticalSpacer_3 = new QSpacerItem(20, 7, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_3);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setHorizontalSpacing(12);
        formLayout_3->setVerticalSpacing(12);
        formLayout_3->setContentsMargins(-1, -1, -1, 9);
        label_11 = new QLabel(verticalFrame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color:white;"));
        label_11->setIndent(10);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        inBTCvalue = new QLabel(verticalFrame);
        inBTCvalue->setObjectName(QString::fromUtf8("inBTCvalue"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Khmer OS System"));
        font4.setBold(false);
        font4.setWeight(50);
        inBTCvalue->setFont(font4);
        inBTCvalue->setStyleSheet(QString::fromUtf8("color:white;"));
        inBTCvalue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inBTCvalue->setIndent(10);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, inBTCvalue);

        label_13 = new QLabel(verticalFrame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("color:white;"));
        label_13->setIndent(10);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_13);

        inUSDvalue = new QLabel(verticalFrame);
        inUSDvalue->setObjectName(QString::fromUtf8("inUSDvalue"));
        inUSDvalue->setFont(font4);
        inUSDvalue->setStyleSheet(QString::fromUtf8("color:white;"));
        inUSDvalue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inUSDvalue->setIndent(10);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, inUSDvalue);

        label_15 = new QLabel(verticalFrame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font3);
        label_15->setStyleSheet(QString::fromUtf8("color:white;"));
        label_15->setIndent(10);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_15);

        inEURvalue = new QLabel(verticalFrame);
        inEURvalue->setObjectName(QString::fromUtf8("inEURvalue"));
        inEURvalue->setFont(font4);
        inEURvalue->setStyleSheet(QString::fromUtf8("color:white;"));
        inEURvalue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inEURvalue->setIndent(10);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, inEURvalue);

        label_12 = new QLabel(verticalFrame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font3);
        label_12->setStyleSheet(QString::fromUtf8("color:white"));
        label_12->setIndent(10);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_12);

        inCNYvalue = new QLabel(verticalFrame);
        inCNYvalue->setObjectName(QString::fromUtf8("inCNYvalue"));
        inCNYvalue->setFont(font4);
        inCNYvalue->setStyleSheet(QString::fromUtf8("color:white"));
        inCNYvalue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inCNYvalue->setIndent(10);

        formLayout_3->setWidget(3, QFormLayout::FieldRole, inCNYvalue);


        verticalLayout_5->addLayout(formLayout_3);


        verticalLayout_2->addWidget(verticalFrame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalFrame = new QFrame(OverviewPage);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setMinimumSize(QSize(0, 50));
        horizontalFrame->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(horizontalFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Khmer OS System"));
        font5.setPointSize(11);
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8("color:white"));
        label_7->setIndent(10);

        horizontalLayout_3->addWidget(label_7);

        labelInfo = new QLabel(horizontalFrame);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));
        labelInfo->setFont(font5);
        labelInfo->setStyleSheet(QString::fromUtf8("color:white"));
        labelInfo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelInfo->setIndent(10);

        horizontalLayout_3->addWidget(labelInfo);


        verticalLayout_2->addWidget(horizontalFrame);

        horizontalFrame3 = new QFrame(OverviewPage);
        horizontalFrame3->setObjectName(QString::fromUtf8("horizontalFrame3"));
        horizontalFrame3->setMinimumSize(QSize(0, 50));
        horizontalFrame3->setStyleSheet(QString::fromUtf8("#horizontalFrame3{border-top-color:rgb(37, 170, 225);\n"
"border-top-width:1px;\n"
"border-style:solid;}"));
        horizontalLayout_6 = new QHBoxLayout(horizontalFrame3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(horizontalFrame3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("color:white;"));
        label_8->setIndent(0);

        horizontalLayout_6->addWidget(label_8);

        label_9 = new QLabel(horizontalFrame3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("color:white;"));
        label_9->setTextFormat(Qt::AutoText);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_9->setIndent(0);

        horizontalLayout_6->addWidget(label_9);


        verticalLayout_2->addWidget(horizontalFrame3);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(9, 9, 9, 9);
        line_2 = new QFrame(OverviewPage);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setMaximumSize(QSize(1, 16777215));
        line_2->setStyleSheet(QString::fromUtf8("background-color:rgb(37, 170, 225);"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_2);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(475, 580));
        frame_2->setMaximumSize(QSize(475, 580));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2 { background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0,0,0,10), stop:1.0 rgba(0,0,0,0)); }"));
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Khmer OS"));
        font6.setPointSize(13);
        label_4->setFont(font6);
        label_4->setStyleSheet(QString::fromUtf8("color: #ededed;"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QString::fromUtf8("(out of sync)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setStyleSheet(QString::fromUtf8("QListView { background: transparent; color:#ffffff;}"));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        horizontalFrame2 = new QFrame(OverviewPage);
        horizontalFrame2->setObjectName(QString::fromUtf8("horizontalFrame2"));
        horizontalFrame2->setMinimumSize(QSize(0, 50));
        horizontalFrame2->setStyleSheet(QString::fromUtf8("#horizontalFrame2{border-top-color:rgb(37, 170, 225);\n"
"border-top-width:1px;\n"
"border-style:solid;}"));
        horizontalLayout_5 = new QHBoxLayout(horizontalFrame2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(horizontalFrame2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_2);

        labelNumTransactions = new QLabel(horizontalFrame2);
        labelNumTransactions->setObjectName(QString::fromUtf8("labelNumTransactions"));
        labelNumTransactions->setFont(font4);
        labelNumTransactions->setStyleSheet(QString::fromUtf8("color: #ededed;"));
        labelNumTransactions->setText(QString::fromUtf8("0"));
        labelNumTransactions->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(labelNumTransactions);


        verticalLayout_3->addWidget(horizontalFrame2);


        horizontalLayout->addLayout(verticalLayout_3);


        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "WALLET", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the MACDCoin network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("OverviewPage", "Balance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("OverviewPage", "Stake", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count toward the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("OverviewPage", "WEALTH", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("OverviewPage", "in BTC", 0, QApplication::UnicodeUTF8));
        inBTCvalue->setText(QApplication::translate("OverviewPage", "0 BTC", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("OverviewPage", "in USD", 0, QApplication::UnicodeUTF8));
        inUSDvalue->setText(QApplication::translate("OverviewPage", "0 USD", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("OverviewPage", "in EUR", 0, QApplication::UnicodeUTF8));
        inEURvalue->setText(QApplication::translate("OverviewPage", "0 EUR", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("OverviewPage", "in CNY", 0, QApplication::UnicodeUTF8));
        inCNYvalue->setText(QApplication::translate("OverviewPage", "0 CNY", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("OverviewPage", "PRICE", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QApplication::translate("OverviewPage", "price", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("OverviewPage", "TOTAL MACD", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("OverviewPage", "4238000.00156545", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OverviewPage", "RECENT TRANSACTIONS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the MACDCoin network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("OverviewPage", "NUMBER OF TRANSACTIONS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelNumTransactions->setToolTip(QApplication::translate("OverviewPage", "Total number of transactions in wallet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
