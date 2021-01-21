#include "canceldownload.h"

cancelDownload::cancelDownload(QWidget *parent) : QMessageBox(parent)
{
    this->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    this->setDefaultButton(QMessageBox::No);
    this->setText("Cancel download in progress?");
    this->setIcon(QMessageBox::Question);
}

void cancelDownload::execCancelWindow() {
    int result = this->exec();

    if (result == QMessageBox::Yes) {
        emit killDownloadProcess();
    }
}
