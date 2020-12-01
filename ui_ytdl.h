/********************************************************************************
** Form generated from reading UI file 'ytdl.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YTDL_H
#define UI_YTDL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ytdl
{
public:
    QWidget *centralwidget;
    QTabWidget *Tabs;
    QWidget *Music;
    QLabel *labelQuality;
    QLabel *labelMFormat;
    QWidget *layoutWidget;
    QHBoxLayout *radiosMFormat;
    QRadioButton *radioAAC;
    QRadioButton *radioFLAC;
    QRadioButton *radioMP3;
    QRadioButton *radioOPUS;
    QRadioButton *radioWAV;
    QWidget *layoutWidget1;
    QHBoxLayout *radiosQuality;
    QRadioButton *radioBest;
    QRadioButton *radioGood;
    QRadioButton *radioMedium;
    QRadioButton *radioLow;
    QWidget *Video;
    QLabel *labelResolution;
    QLabel *labelVFormat;
    QWidget *layoutWidget2;
    QHBoxLayout *radiosVFormat;
    QRadioButton *radio3GP;
    QRadioButton *radioFLV;
    QRadioButton *radioMP4;
    QRadioButton *radioWEBM;
    QWidget *layoutWidget3;
    QHBoxLayout *radiosResolution;
    QRadioButton *radio4K;
    QRadioButton *radio1440p;
    QRadioButton *radio1080p;
    QRadioButton *radio720p;
    QRadioButton *radio480p;
    QPushButton *buttonBrowse;
    QPushButton *buttonDownload;
    QLineEdit *lineBrowse;
    QLabel *labelURL;
    QLineEdit *lineURL;
    QButtonGroup *VFormatGroup;
    QButtonGroup *MQualityGroup;
    QButtonGroup *MFormatGroup;
    QButtonGroup *VResGroup;

    void setupUi(QMainWindow *ytdl)
    {
        if (ytdl->objectName().isEmpty())
            ytdl->setObjectName(QString::fromUtf8("ytdl"));
        ytdl->setEnabled(true);
        ytdl->resize(600, 200);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ytdl->sizePolicy().hasHeightForWidth());
        ytdl->setSizePolicy(sizePolicy);
        ytdl->setMinimumSize(QSize(600, 200));
        ytdl->setMaximumSize(QSize(600, 200));
        centralwidget = new QWidget(ytdl);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Tabs = new QTabWidget(centralwidget);
        Tabs->setObjectName(QString::fromUtf8("Tabs"));
        Tabs->setGeometry(QRect(0, 40, 611, 121));
        Music = new QWidget();
        Music->setObjectName(QString::fromUtf8("Music"));
        labelQuality = new QLabel(Music);
        labelQuality->setObjectName(QString::fromUtf8("labelQuality"));
        labelQuality->setGeometry(QRect(10, 10, 61, 21));
        labelMFormat = new QLabel(Music);
        labelMFormat->setObjectName(QString::fromUtf8("labelMFormat"));
        labelMFormat->setGeometry(QRect(10, 50, 51, 21));
        layoutWidget = new QWidget(Music);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 50, 481, 23));
        radiosMFormat = new QHBoxLayout(layoutWidget);
        radiosMFormat->setObjectName(QString::fromUtf8("radiosMFormat"));
        radiosMFormat->setContentsMargins(0, 0, 0, 0);
        radioAAC = new QRadioButton(layoutWidget);
        MFormatGroup = new QButtonGroup(ytdl);
        MFormatGroup->setObjectName(QString::fromUtf8("MFormatGroup"));
        MFormatGroup->addButton(radioAAC);
        radioAAC->setObjectName(QString::fromUtf8("radioAAC"));

        radiosMFormat->addWidget(radioAAC);

        radioFLAC = new QRadioButton(layoutWidget);
        MFormatGroup->addButton(radioFLAC);
        radioFLAC->setObjectName(QString::fromUtf8("radioFLAC"));

        radiosMFormat->addWidget(radioFLAC);

        radioMP3 = new QRadioButton(layoutWidget);
        MFormatGroup->addButton(radioMP3);
        radioMP3->setObjectName(QString::fromUtf8("radioMP3"));
        radioMP3->setChecked(true);

        radiosMFormat->addWidget(radioMP3);

        radioOPUS = new QRadioButton(layoutWidget);
        MFormatGroup->addButton(radioOPUS);
        radioOPUS->setObjectName(QString::fromUtf8("radioOPUS"));

        radiosMFormat->addWidget(radioOPUS);

        radioWAV = new QRadioButton(layoutWidget);
        MFormatGroup->addButton(radioWAV);
        radioWAV->setObjectName(QString::fromUtf8("radioWAV"));

        radiosMFormat->addWidget(radioWAV);

        layoutWidget1 = new QWidget(Music);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 10, 501, 23));
        radiosQuality = new QHBoxLayout(layoutWidget1);
        radiosQuality->setObjectName(QString::fromUtf8("radiosQuality"));
        radiosQuality->setContentsMargins(0, 0, 0, 0);
        radioBest = new QRadioButton(layoutWidget1);
        MQualityGroup = new QButtonGroup(ytdl);
        MQualityGroup->setObjectName(QString::fromUtf8("MQualityGroup"));
        MQualityGroup->addButton(radioBest);
        radioBest->setObjectName(QString::fromUtf8("radioBest"));
        radioBest->setEnabled(true);
        radioBest->setChecked(true);

        radiosQuality->addWidget(radioBest);

        radioGood = new QRadioButton(layoutWidget1);
        MQualityGroup->addButton(radioGood);
        radioGood->setObjectName(QString::fromUtf8("radioGood"));

        radiosQuality->addWidget(radioGood);

        radioMedium = new QRadioButton(layoutWidget1);
        MQualityGroup->addButton(radioMedium);
        radioMedium->setObjectName(QString::fromUtf8("radioMedium"));

        radiosQuality->addWidget(radioMedium);

        radioLow = new QRadioButton(layoutWidget1);
        MQualityGroup->addButton(radioLow);
        radioLow->setObjectName(QString::fromUtf8("radioLow"));

        radiosQuality->addWidget(radioLow);

        Tabs->addTab(Music, QString());
        Video = new QWidget();
        Video->setObjectName(QString::fromUtf8("Video"));
        Video->setEnabled(true);
        labelResolution = new QLabel(Video);
        labelResolution->setObjectName(QString::fromUtf8("labelResolution"));
        labelResolution->setGeometry(QRect(10, 10, 111, 21));
        labelVFormat = new QLabel(Video);
        labelVFormat->setObjectName(QString::fromUtf8("labelVFormat"));
        labelVFormat->setGeometry(QRect(10, 50, 121, 21));
        layoutWidget2 = new QWidget(Video);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(140, 50, 451, 21));
        radiosVFormat = new QHBoxLayout(layoutWidget2);
        radiosVFormat->setObjectName(QString::fromUtf8("radiosVFormat"));
        radiosVFormat->setContentsMargins(0, 0, 0, 0);
        radio3GP = new QRadioButton(layoutWidget2);
        VFormatGroup = new QButtonGroup(ytdl);
        VFormatGroup->setObjectName(QString::fromUtf8("VFormatGroup"));
        VFormatGroup->addButton(radio3GP);
        radio3GP->setObjectName(QString::fromUtf8("radio3GP"));

        radiosVFormat->addWidget(radio3GP);

        radioFLV = new QRadioButton(layoutWidget2);
        VFormatGroup->addButton(radioFLV);
        radioFLV->setObjectName(QString::fromUtf8("radioFLV"));

        radiosVFormat->addWidget(radioFLV);

        radioMP4 = new QRadioButton(layoutWidget2);
        VFormatGroup->addButton(radioMP4);
        radioMP4->setObjectName(QString::fromUtf8("radioMP4"));
        radioMP4->setChecked(true);

        radiosVFormat->addWidget(radioMP4);

        radioWEBM = new QRadioButton(layoutWidget2);
        VFormatGroup->addButton(radioWEBM);
        radioWEBM->setObjectName(QString::fromUtf8("radioWEBM"));

        radiosVFormat->addWidget(radioWEBM);

        layoutWidget3 = new QWidget(Video);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(120, 10, 471, 23));
        radiosResolution = new QHBoxLayout(layoutWidget3);
        radiosResolution->setObjectName(QString::fromUtf8("radiosResolution"));
        radiosResolution->setContentsMargins(0, 0, 0, 0);
        radio4K = new QRadioButton(layoutWidget3);
        VResGroup = new QButtonGroup(ytdl);
        VResGroup->setObjectName(QString::fromUtf8("VResGroup"));
        VResGroup->addButton(radio4K);
        radio4K->setObjectName(QString::fromUtf8("radio4K"));

        radiosResolution->addWidget(radio4K);

        radio1440p = new QRadioButton(layoutWidget3);
        VResGroup->addButton(radio1440p);
        radio1440p->setObjectName(QString::fromUtf8("radio1440p"));

        radiosResolution->addWidget(radio1440p);

        radio1080p = new QRadioButton(layoutWidget3);
        VResGroup->addButton(radio1080p);
        radio1080p->setObjectName(QString::fromUtf8("radio1080p"));
        radio1080p->setChecked(true);

        radiosResolution->addWidget(radio1080p);

        radio720p = new QRadioButton(layoutWidget3);
        VResGroup->addButton(radio720p);
        radio720p->setObjectName(QString::fromUtf8("radio720p"));

        radiosResolution->addWidget(radio720p);

        radio480p = new QRadioButton(layoutWidget3);
        VResGroup->addButton(radio480p);
        radio480p->setObjectName(QString::fromUtf8("radio480p"));

        radiosResolution->addWidget(radio480p);

        Tabs->addTab(Video, QString());
        buttonBrowse = new QPushButton(centralwidget);
        buttonBrowse->setObjectName(QString::fromUtf8("buttonBrowse"));
        buttonBrowse->setGeometry(QRect(10, 170, 80, 23));
        buttonDownload = new QPushButton(centralwidget);
        buttonDownload->setObjectName(QString::fromUtf8("buttonDownload"));
        buttonDownload->setGeometry(QRect(420, 170, 161, 23));
        lineBrowse = new QLineEdit(centralwidget);
        lineBrowse->setObjectName(QString::fromUtf8("lineBrowse"));
        lineBrowse->setGeometry(QRect(100, 170, 301, 23));
        labelURL = new QLabel(centralwidget);
        labelURL->setObjectName(QString::fromUtf8("labelURL"));
        labelURL->setGeometry(QRect(10, 10, 81, 21));
        lineURL = new QLineEdit(centralwidget);
        lineURL->setObjectName(QString::fromUtf8("lineURL"));
        lineURL->setGeometry(QRect(90, 10, 501, 23));
        ytdl->setCentralWidget(centralwidget);

        retranslateUi(ytdl);

        Tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ytdl);
    } // setupUi

    void retranslateUi(QMainWindow *ytdl)
    {
        ytdl->setWindowTitle(QCoreApplication::translate("ytdl", "ytdl", nullptr));
#if QT_CONFIG(tooltip)
        Music->setToolTip(QCoreApplication::translate("ytdl", "<html><head/><body><p>Music</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        Music->setWhatsThis(QCoreApplication::translate("ytdl", "<html><head/><body><p>Music</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        labelQuality->setText(QCoreApplication::translate("ytdl", "Quality:", nullptr));
        labelMFormat->setText(QCoreApplication::translate("ytdl", "Format:", nullptr));
        radioAAC->setText(QCoreApplication::translate("ytdl", "AAC", nullptr));
        radioFLAC->setText(QCoreApplication::translate("ytdl", "FLAC", nullptr));
        radioMP3->setText(QCoreApplication::translate("ytdl", "MP3", nullptr));
        radioOPUS->setText(QCoreApplication::translate("ytdl", "OPUS", nullptr));
        radioWAV->setText(QCoreApplication::translate("ytdl", "WAV", nullptr));
        radioBest->setText(QCoreApplication::translate("ytdl", "Best", nullptr));
        radioGood->setText(QCoreApplication::translate("ytdl", "Good", nullptr));
        radioMedium->setText(QCoreApplication::translate("ytdl", "Medium", nullptr));
        radioLow->setText(QCoreApplication::translate("ytdl", "Low", nullptr));
        Tabs->setTabText(Tabs->indexOf(Music), QCoreApplication::translate("ytdl", "Music", nullptr));
        labelResolution->setText(QCoreApplication::translate("ytdl", "Max Resolution:", nullptr));
        labelVFormat->setText(QCoreApplication::translate("ytdl", "Preferred Format:", nullptr));
        radio3GP->setText(QCoreApplication::translate("ytdl", "3GP", nullptr));
        radioFLV->setText(QCoreApplication::translate("ytdl", "FLV", nullptr));
        radioMP4->setText(QCoreApplication::translate("ytdl", "MP4", nullptr));
        radioWEBM->setText(QCoreApplication::translate("ytdl", "WEBM", nullptr));
        radio4K->setText(QCoreApplication::translate("ytdl", "4K", nullptr));
        radio1440p->setText(QCoreApplication::translate("ytdl", "1440p", nullptr));
        radio1080p->setText(QCoreApplication::translate("ytdl", "1080p", nullptr));
        radio720p->setText(QCoreApplication::translate("ytdl", "720p", nullptr));
        radio480p->setText(QCoreApplication::translate("ytdl", "480p", nullptr));
        Tabs->setTabText(Tabs->indexOf(Video), QCoreApplication::translate("ytdl", "Video", nullptr));
        buttonBrowse->setText(QCoreApplication::translate("ytdl", "Browse...", nullptr));
        buttonDownload->setText(QCoreApplication::translate("ytdl", "Download", nullptr));
        labelURL->setText(QCoreApplication::translate("ytdl", "Enter URL:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ytdl: public Ui_ytdl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YTDL_H
