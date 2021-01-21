#ifndef CANCELDOWNLOAD_H
#define CANCELDOWNLOAD_H

#include <QMessageBox>

class cancelDownload : public QMessageBox
{
    Q_OBJECT

public:
    explicit cancelDownload(QWidget *parent = nullptr);


public slots:
    void execCancelWindow();

signals:
    void killDownloadProcess();

};

#endif // CANCELDOWNLOAD_H
