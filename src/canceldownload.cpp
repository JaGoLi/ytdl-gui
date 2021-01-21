#include "canceldownload.h"
#include <QIcon>

cancelDownload::cancelDownload(QWidget *parent) : QMessageBox(parent)
{
    this->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    this->setDefaultButton(QMessageBox::No);
    this->setText("Cancel download in progress?");
    this->setIcon(QMessageBox::Question);
    this->setWindowIcon(QIcon::fromTheme("youtubedl-gui"));
}
