#ifndef MUSICBUTTONS_H
#define MUSICBUTTONS_H

#include "ytdl.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MusicButtons; }
QT_END_NAMESPACE

class MusicButtons
{
public:
        MusicButtons(Ui::ytdl* ui);

public slots:
        void getURLText();
};

#endif // MUSICBUTTONS_H
