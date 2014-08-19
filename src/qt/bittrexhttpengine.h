#ifndef BITTREXHTTPENGINE_H
#define BITTREXHTTPENGINE_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>

class bittrexhttpengine : public QObject
{
    Q_OBJECT
public:
    explicit bittrexhttpengine(QObject *parent = 0);
    void finishedSlot(QNetworkReply* reply);
    void getGeneralInfo(QString APIurl);
    QString responseString;

private:
    QNetworkAccessManager* nam;

signals:

public slots:

};

#endif // BITTREXHTTPENGINE1_H
