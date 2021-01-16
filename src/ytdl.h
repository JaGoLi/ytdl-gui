#ifndef YTDL_H
#define YTDL_H

#include <QMainWindow>
#include <QMessageBox>
#include "maincommand.h"
#include "downloadstatus.h"
#include "downloadprogress.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ytdl; }
QT_END_NAMESPACE

class ytdl : public QMainWindow
{
    Q_OBJECT

    //Object pointers
    downloadStatus* downloading;
    mainCommand* download_instance;
    downloadProgress* status;

    //Thread pointers
    QThread* downloadThread;
    QThread* progressThread;


public:
    ytdl(QWidget *parent = nullptr);
    ~ytdl();

    void run_ytdl(std::string input);
    static ytdl* getWinInstance();
    static Ui::ytdl* getUiInstance();

signals:
    void userAccepted();
    void closeDownloading();

private:
    Ui::ytdl *ui;
    static ytdl* curr_window;
    static Ui::ytdl* curr_ui;

public slots:
    //internal
    void browseAction();

    //external
    void downloadAction();
    void printResult(int result_num);
    void messageDownload();
    void deleteDownloading();
    void setStatusClose();

};
#endif // YTDL_H
