#ifndef YTDL_H
#define YTDL_H

#include <QMainWindow>
#include <QMessageBox>
#include "maincommand.h"
#include "downloadstatus.h"
#include "downloadprogress.h"
#include "canceldownload.h"

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
    cancelDownload* cancel;

    //Thread pointers
    QThread* downloadThread;
    QThread* progressThread;
    QThread* cancelThread;


public:
    ytdl(QWidget *parent = nullptr);
    ~ytdl();

    //config dir
    QString config_dir;
    QString file_qstr;
    std::string file_str;

    void run_ytdl(std::string input);
    static ytdl* getWinInstance();
    static Ui::ytdl* getUiInstance();
    std::string check_to_bool(QCheckBox* input);

signals:
    void userAccepted();
    void closeDownloading();

private:
    Ui::ytdl *ui;
    static ytdl* curr_window;
    static Ui::ytdl* curr_ui;
    bool no_feedback = false;


    //close button override
    void closeEvent(QCloseEvent *event) override;

public slots:
    //internal
    void browseAction();

    //external
    void downloadAction();
    void printResult(int result_num);
    void messageDownload();
    void deleteDownloading();
    void setStatusClose();
    void killDownloadProcess();
    void changeVisibility(int state);

};
#endif // YTDL_H
