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

private:
    Ui::downloadStatus *download_ui;
    static Ui::downloadStatus* curr_ui;
};

#endif // DOWNLOADSTATUS_H
