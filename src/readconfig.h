#ifndef READCONFIG_H
#define READCONFIG_H

#include <QObject>

class readConfig : public QObject
{
    Q_OBJECT
public:
    explicit readConfig(std::string in_file);

    std::string values[8];

private:
    std::string in_file;
    std::string remove_whitespace(std::string input);

public slots:
    void get_values();

signals:

};

#endif // READCONFIG_H
