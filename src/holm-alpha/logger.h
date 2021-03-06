/*
* Project created by QtCreator 2016-01-28T16:04:57
* Copyright 2016 by Sein Coray
*/

#ifndef LOGGER_H
#define LOGGER_H

#include <QObject>
#include <iostream>
using namespace std;

enum LogLevel {
    NORMAL,
    INCREASED,
    DEBUG
};

class Logger : public QObject
{
    Q_OBJECT
public:
    static void log(QString msg, LogLevel lvl);
    static void setLevel(LogLevel lvl);
    static LogLevel getLevel();

signals:

public slots:

private:
    static LogLevel level;
};

#endif // LOGGER_H
