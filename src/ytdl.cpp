#include "ytdl.h"
#include "ui_ytdl.h"
#include <string>
#include <iostream>
#include <QFileDialog>
#include <QScreen>

ytdl* ytdl::curr_window = nullptr;
Ui::ytdl* ytdl::curr_ui = nullptr;


ytdl::ytdl(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ytdl)
{
    //Initialize pointers
    ui->setupUi(this);
    curr_window = this;

    //Set Default Button
    ui->buttonDownload->setDefault(true);

    //Setup MFormatGroup IDs
    ui->MFormatGroup->setId(ui->radioAAC, 0);
    ui->MFormatGroup->setId(ui->radioOGG, 1);
    ui->MFormatGroup->setId(ui->radioMP3, 2);
    ui->MFormatGroup->setId(ui->radioOPUS, 3);
    ui->MFormatGroup->setId(ui->radioWAV, 4);

    //Setup MQualityGroup IDs
    ui->MQualityGroup->setId(ui->radioBest, 0);
    ui->MQualityGroup->setId(ui->radioGood, 1);
    ui->MQualityGroup->setId(ui->radioMedium, 2);
    ui->MQualityGroup->setId(ui->radioLow, 3);

    //Setup VFormatGroup IDs
    ui->VFormatGroup->setId(ui->radio3GP, 0);
    ui->VFormatGroup->setId(ui->radioFLV, 1);
    ui->VFormatGroup->setId(ui->radioMP4, 2);
    ui->VFormatGroup->setId(ui->radioWEBM, 3);

    //Setup VResGroup
    ui->VResGroup->setId(ui->radio4K, 0);
    ui->VResGroup->setId(ui->radio1440p, 1);
    ui->VResGroup->setId(ui->radio1080p, 2);
    ui->VResGroup->setId(ui->radio720p, 3);
    ui->VResGroup->setId(ui->radio480p, 4);

    //center on screen
    move(QGuiApplication::screens().at(0)->geometry().center() - frameGeometry().center());

    //Setup text
    QString downloads_dir = QDir::homePath() + "/Downloads";
    if (QDir(downloads_dir).exists()) {
        ui->lineBrowse->setText(downloads_dir);
    }
    else {
        ui->lineBrowse->setText(QDir::homePath());
    }

    connect(ui->buttonBrowse, &QPushButton::clicked, this, &ytdl::browseAction);

}

ytdl::~ytdl()
{
    delete ui;
}

//Return Pointers
ytdl* ytdl::getWinInstance() {
        return curr_window;
}

Ui::ytdl* ytdl::getUiInstance() {
        return curr_window->ui;
}

//slots function
void ytdl::browseAction() {

    QString user_dir = QFileDialog::getExistingDirectory(this, "Select a folder", QDir::homePath());
    if (!user_dir.isEmpty()) {
        ui->lineBrowse->setText(user_dir);
    }
}
