#ifndef GRILFREND_H
#define GRILFREND_H

#include <QObject>

class GrilFrend : public QObject
{
    Q_OBJECT
public:
    explicit GrilFrend(QObject *parent = nullptr);

signals:
    void hungry();

public slots:
};

#endif // GRILFREND_H
