#ifndef MAINACTIONS_H
#define MAINACTIONS_H

#include <QObject>
#include <QThread>
#include "ytdl.h"
#include "ui_ytdl.h"
#include "maincommand.h"


class mainActions : public QObject
{
    Q_OBJECT

public:
    mainActions(QObject *parent = nullptr);
    friend void ytdl::run_ytdl(std::string args);
    static std::string QString_to_str(QString input);

signals:
       void userAccepted();

private:
       ytdl* window;
       Ui::ytdl* ui;

private slots:
       friend void ytdl::downloadAction();
       friend void ytdl::printResult(int result_num);
       friend void ytdl::messageDownload();
};



#endif // MAINACTIONS_H
