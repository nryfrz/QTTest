#include "me.h"

Me::Me(QObject *parent) : QObject(parent)
{

}

void Me::eat()
{
    qDebug() << "eat";
}
