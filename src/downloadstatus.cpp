#include "downloadstatus.h"
#include "ui_downloadstatus.h"

downloadStatus::downloadStatus(QWidget *parent) :
    QDialog(parent),
    download_ui(new Ui::downloadStatus)
{
    download_ui->setupUi(this);
    this->setWindowTitle("Progress");

}

downloadStatus::~downloadStatus()
{
    delete download_ui;
}

Ui::downloadStatus* downloadStatus::getUiInstance() {
    return this->download_ui;
}
