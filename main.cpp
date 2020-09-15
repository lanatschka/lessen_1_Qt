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
    d3->performQuack();
    d3->performFly();


    Duck *d4 = new RubberDuck();
    d4->display();
    d4->performQuack();
    d4->performFly();

    Duck *d2 = new RedHeadDuck();
    d2->display();
    d2->performQuack();
    d2->performFly();

    Duck *d1 = new DecoyDuck();
    d1->display();
    d1->performQuack();
    d1->performFly();

    return a.exec();
}
