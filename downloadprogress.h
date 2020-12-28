#ifndef DOWNLOADPROGRESS_H
#define DOWNLOADPROGRESS_H

#include <QObject>
#include "downloadstatus.h"
#include "ui_downloadstatus.h"

class downloadProgress : public QObject
{
    Q_OBJECT
public:
    explicit downloadProgress(Ui::downloadStatus* input);

private:
    Ui::downloadStatus* download_ui;


signals:
    void finished();

public slots:
    void updateStatus();

};

#endif // DOWNLOADPROGRESS_H
