/********************************************************************************
** Form generated from reading UI file 'rpcconsole.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPCCONSOLE_H
#define UI_RPCCONSOLE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_13;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *clientVersion;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *openSSLVersion;
    QLabel *buildDate;
    QLabel *label_7;
    QLabel *startupTime;
    QLabel *label_11;
    QCheckBox *isTestNet;
    QLabel *label_8;
    QLabel *numberOfConnections;
    QLabel *label_3;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *numberOfBlocks;
    QLabel *label_2;
    QLabel *totalBlocks;
    QLabel *lastBlockTime;
    QSpacerItem *verticalSpacer_2;
    QPushButton *showCLOptionsButton;
    QLabel *labelCLOptions;
    QSpacerItem *verticalSpacer;
    QLabel *labelDebugLogfile;
    QPushButton *openDebugLogfileButton;
    QLabel *clientName;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_console;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_6;
    QTextEdit *messagesWidget;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;

    void setupUi(QDialog *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QString::fromUtf8("RPCConsole"));
        RPCConsole->resize(740, 539);
        QFont font;
        font.setFamily(QString::fromUtf8("Khmer OS"));
        RPCConsole->setFont(font);
        RPCConsole->setAutoFillBackground(false);
        RPCConsole->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 40, 54);"));
        RPCConsole->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(RPCConsole);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("color:white;"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(true);
        tabWidget->setMovable(true);
        tab_info = new QWidget();
        tab_info->setObjectName(QString::fromUtf8("tab_info"));
        tab_info->setFont(font);
        gridLayout = new QGridLayout(tab_info);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 11, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 7, 1, 1, 1);

        label_13 = new QLabel(tab_info);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Khmer OS"));
        font1.setPointSize(10);
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("color:white;"));
        label_13->setIndent(10);

        gridLayout->addWidget(label_13, 6, 1, 1, 1);

        label_9 = new QLabel(tab_info);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Khmer OS"));
        font2.setBold(true);
        font2.setWeight(75);
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout->addWidget(label_9, 1, 1, 1, 1);

        label_5 = new QLabel(tab_info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color:white;"));
        label_5->setIndent(10);

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        label_6 = new QLabel(tab_info);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color:white;"));
        label_6->setIndent(10);

        gridLayout->addWidget(label_6, 3, 1, 1, 1);

        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName(QString::fromUtf8("clientVersion"));
        clientVersion->setFont(font1);
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setStyleSheet(QString::fromUtf8("color:white;"));
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setIndent(10);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 3, 3, 1, 1);

        label_12 = new QLabel(tab_info);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color:white;"));
        label_12->setIndent(10);

        gridLayout->addWidget(label_12, 5, 1, 1, 1);

        label_14 = new QLabel(tab_info);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color:white;"));
        label_14->setIndent(10);

        gridLayout->addWidget(label_14, 4, 1, 1, 1);

        openSSLVersion = new QLabel(tab_info);
        openSSLVersion->setObjectName(QString::fromUtf8("openSSLVersion"));
        openSSLVersion->setFont(font1);
        openSSLVersion->setCursor(QCursor(Qt::IBeamCursor));
        openSSLVersion->setStyleSheet(QString::fromUtf8("color:white;"));
        openSSLVersion->setTextFormat(Qt::PlainText);
        openSSLVersion->setIndent(10);
        openSSLVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(openSSLVersion, 4, 3, 1, 1);

        buildDate = new QLabel(tab_info);
        buildDate->setObjectName(QString::fromUtf8("buildDate"));
        buildDate->setFont(font1);
        buildDate->setCursor(QCursor(Qt::IBeamCursor));
        buildDate->setStyleSheet(QString::fromUtf8("color:white;"));
        buildDate->setTextFormat(Qt::PlainText);
        buildDate->setIndent(10);
        buildDate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(buildDate, 5, 3, 1, 1);

        label_7 = new QLabel(tab_info);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color:white;"));
        label_7->setIndent(10);

        gridLayout->addWidget(label_7, 9, 1, 1, 1);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName(QString::fromUtf8("startupTime"));
        startupTime->setFont(font1);
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setStyleSheet(QString::fromUtf8("color:white;"));
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setIndent(10);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 6, 3, 1, 1);

        label_11 = new QLabel(tab_info);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout->addWidget(label_11, 8, 1, 1, 1);

        isTestNet = new QCheckBox(tab_info);
        isTestNet->setObjectName(QString::fromUtf8("isTestNet"));
        isTestNet->setEnabled(false);
        isTestNet->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout->addWidget(isTestNet, 10, 3, 1, 1);

        label_8 = new QLabel(tab_info);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color:white;"));
        label_8->setIndent(10);

        gridLayout->addWidget(label_8, 10, 1, 1, 1);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName(QString::fromUtf8("numberOfConnections"));
        numberOfConnections->setFont(font1);
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setStyleSheet(QString::fromUtf8("color:white;"));
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setIndent(10);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 9, 3, 1, 1);

        label_3 = new QLabel(tab_info);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));
        label_3->setIndent(10);

        gridLayout->addWidget(label_3, 13, 1, 1, 1);

        label_10 = new QLabel(tab_info);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout->addWidget(label_10, 12, 1, 1, 1);

        label_4 = new QLabel(tab_info);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:white;"));
        label_4->setIndent(10);

        gridLayout->addWidget(label_4, 14, 1, 1, 1);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName(QString::fromUtf8("numberOfBlocks"));
        numberOfBlocks->setFont(font1);
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setStyleSheet(QString::fromUtf8("color:white;"));
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setIndent(10);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 13, 3, 1, 1);

        label_2 = new QLabel(tab_info);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:white;"));
        label_2->setIndent(10);

        gridLayout->addWidget(label_2, 15, 1, 1, 1);

        totalBlocks = new QLabel(tab_info);
        totalBlocks->setObjectName(QString::fromUtf8("totalBlocks"));
        totalBlocks->setFont(font1);
        totalBlocks->setCursor(QCursor(Qt::IBeamCursor));
        totalBlocks->setStyleSheet(QString::fromUtf8("color:white;"));
        totalBlocks->setTextFormat(Qt::PlainText);
        totalBlocks->setIndent(10);
        totalBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(totalBlocks, 14, 3, 1, 1);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName(QString::fromUtf8("lastBlockTime"));
        lastBlockTime->setFont(font1);
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setStyleSheet(QString::fromUtf8("color:white;"));
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setIndent(10);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 15, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 16, 1, 1, 1);

        showCLOptionsButton = new QPushButton(tab_info);
        showCLOptionsButton->setObjectName(QString::fromUtf8("showCLOptionsButton"));
        showCLOptionsButton->setStyleSheet(QString::fromUtf8("color:white;"));
        showCLOptionsButton->setAutoDefault(false);

        gridLayout->addWidget(showCLOptionsButton, 20, 1, 1, 1);

        labelCLOptions = new QLabel(tab_info);
        labelCLOptions->setObjectName(QString::fromUtf8("labelCLOptions"));
        labelCLOptions->setFont(font2);
        labelCLOptions->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout->addWidget(labelCLOptions, 19, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 21, 1, 1, 1);

        labelDebugLogfile = new QLabel(tab_info);
        labelDebugLogfile->setObjectName(QString::fromUtf8("labelDebugLogfile"));
        labelDebugLogfile->setFont(font2);
        labelDebugLogfile->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout->addWidget(labelDebugLogfile, 19, 3, 1, 1);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName(QString::fromUtf8("openDebugLogfileButton"));
        openDebugLogfileButton->setStyleSheet(QString::fromUtf8("color:white;"));
        openDebugLogfileButton->setAutoDefault(false);

        gridLayout->addWidget(openDebugLogfileButton, 20, 3, 1, 1);

        clientName = new QLabel(tab_info);
        clientName->setObjectName(QString::fromUtf8("clientName"));
        clientName->setFont(font1);
        clientName->setCursor(QCursor(Qt::IBeamCursor));
        clientName->setStyleSheet(QString::fromUtf8("color:white;"));
        clientName->setTextFormat(Qt::PlainText);
        clientName->setIndent(10);
        clientName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientName, 2, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 6, 0, 1, 1);

        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName(QString::fromUtf8("tab_console"));
        verticalLayout_3 = new QVBoxLayout(tab_console);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        messagesWidget = new QTextEdit(tab_console);
        messagesWidget->setObjectName(QString::fromUtf8("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        messagesWidget->setFont(font);
        messagesWidget->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-color:rgba(37, 170, 225, 255);\n"
"border-width:1px;\n"
"border-style:solid;"));
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(tab_console);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgba(37, 170, 225, 255);"));
        label->setText(QString::fromUtf8(">"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("color:white;\n"
"border-bottom-color:rgba(37, 170, 225, 255);\n"
"border-bottom-width:1px;\n"
"border-style:solid;"));

        horizontalLayout->addWidget(lineEdit);

        clearButton = new QPushButton(tab_console);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setMaximumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon);
        clearButton->setShortcut(QString::fromUtf8("Ctrl+L"));
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab_console, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(RPCConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QDialog *RPCConsole)
    {
        RPCConsole->setWindowTitle(QApplication::translate("RPCConsole", "MACDCoin - Debug window", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("RPCConsole", "Startup time", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("RPCConsole", "MACDCoin Core", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("RPCConsole", "Client name", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("RPCConsole", "Client version", 0, QApplication::UnicodeUTF8));
        clientVersion->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("RPCConsole", "Build date", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("RPCConsole", "Using OpenSSL version", 0, QApplication::UnicodeUTF8));
        openSSLVersion->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        buildDate->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("RPCConsole", "Number of connections", 0, QApplication::UnicodeUTF8));
        startupTime->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("RPCConsole", "Network", 0, QApplication::UnicodeUTF8));
        isTestNet->setText(QString());
        label_8->setText(QApplication::translate("RPCConsole", "On testnet", 0, QApplication::UnicodeUTF8));
        numberOfConnections->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RPCConsole", "Current number of blocks", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("RPCConsole", "Block chain", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("RPCConsole", "Estimated total blocks", 0, QApplication::UnicodeUTF8));
        numberOfBlocks->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RPCConsole", "Last block time", 0, QApplication::UnicodeUTF8));
        totalBlocks->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        lastBlockTime->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showCLOptionsButton->setToolTip(QApplication::translate("RPCConsole", "Show the MACDCoin-Qt help message to get a list with possible MACDCoin command-line options.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showCLOptionsButton->setText(QApplication::translate("RPCConsole", "&Show", 0, QApplication::UnicodeUTF8));
        labelCLOptions->setText(QApplication::translate("RPCConsole", "Command-line options", 0, QApplication::UnicodeUTF8));
        labelDebugLogfile->setText(QApplication::translate("RPCConsole", "Debug log file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        openDebugLogfileButton->setToolTip(QApplication::translate("RPCConsole", "Open the MACDCoin debug log file from the current data directory. This can take a few seconds for large log files.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        openDebugLogfileButton->setText(QApplication::translate("RPCConsole", "&Open", 0, QApplication::UnicodeUTF8));
        clientName->setText(QApplication::translate("RPCConsole", "N/A", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QApplication::translate("RPCConsole", "&Information", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("RPCConsole", "Clear console", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QApplication::translate("RPCConsole", "&Console", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPCCONSOLE_H
