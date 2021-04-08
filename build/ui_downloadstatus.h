/********************************************************************************
** Form generated from reading UI file 'downloadstatus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADSTATUS_H
#define UI_DOWNLOADSTATUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_downloadStatus
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QProgressBar *progressBar;

    void setupUi(QDialog *downloadStatus)
    {
        if (downloadStatus->objectName().isEmpty())
            downloadStatus->setObjectName(QString::fromUtf8("downloadStatus"));
        downloadStatus->resize(300, 102);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(downloadStatus->sizePolicy().hasHeightForWidth());
        downloadStatus->setSizePolicy(sizePolicy);
        downloadStatus->setMinimumSize(QSize(300, 102));
        downloadStatus->setMaximumSize(QSize(300, 102));
        verticalLayoutWidget = new QWidget(downloadStatus);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 0, 281, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        progressBar = new QProgressBar(verticalLayoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);


        retranslateUi(downloadStatus);

        QMetaObject::connectSlotsByName(downloadStatus);
    } // setupUi

    void retranslateUi(QDialog *downloadStatus)
    {
        downloadStatus->setWindowTitle(QCoreApplication::translate("downloadStatus", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("downloadStatus", "Downloading...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class downloadStatus: public Ui_downloadStatus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADSTATUS_H
