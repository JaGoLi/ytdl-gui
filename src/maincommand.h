#ifndef MAINCOMMAND_H
#define MAINCOMMAND_H

#include <QObject>
#include <string>
#include <QThread>

class mainCommand : public QObject
{
    Q_OBJECT
public:
    explicit mainCommand(std::string args);

private:
    std::string args;

public slots:
    void download();

signals:
    void returnFinished(int number);
    void finished();

};

#endif // MAINCOMMAND_H
