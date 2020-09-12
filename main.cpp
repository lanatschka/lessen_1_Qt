#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "rubberduck.h"
#include "decoyduck.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Duck *d3 = new MallardDuck();
    d3->display();
    d3->quack();
    Duck *d4 = new RubberDuck();
    d4->display();
    d4->quack();
    Duck *d2 = new RedHeadDuck();
    d2->display();
    d2->quack();
    Duck *d1 = new DecoyDuck();
    d1->display();
    d1->quack();

    return a.exec();
}
