#ifndef DOWNLOADSTATUS_H
#define DOWNLOADSTATUS_H

#include <QDialog>

namespace Ui {
class downloadStatus;
}

class downloadStatus : public QDialog
{
    Q_OBJECT

public:
    explicit downloadStatus(QWidget *parent = nullptr);
    Ui::downloadStatus* getUiInstance();
    ~downloadStatus();

    bool download_lock = false;

private:
    Ui::downloadStatus *download_ui;
    static Ui::downloadStatus* curr_ui;

    //close button override
    void closeEvent(QCloseEvent *event) override;
};

#endif // DOWNLOADSTATUS_H
