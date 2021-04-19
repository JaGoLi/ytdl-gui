#ifndef MAINCOMMAND_H
#define MAINCOMMAND_H

#include <QObject>
#include <string>
#include <QThread>
#include <QProcess>

class mainCommand : public QObject
{
    Q_OBJECT
public:
    explicit mainCommand(std::string args);
    QProcess* command;

private:
    //args
    QString ytdl_command;

    //QProcess Params
    QString shell_prog;
    QStringList arguments;

public slots:
    void download();
    void processResult(int result_num, QProcess::ExitStatus result_enum);

signals:
    void returnFinished(int number);
    void finished();

};

#endif // MAINCOMMAND_H
