#ifndef ME_H
#define ME_H

#include <QObject>
#include <QDebug>

class Me : public QObject
{
    Q_OBJECT
public:
    explicit Me(QObject *parent = nullptr);

signals:

public slots:
    void eat();
};

#endif // ME_H
