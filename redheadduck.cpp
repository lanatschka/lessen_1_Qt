#include "redheadduck.h"

RedHeadDuck::RedHeadDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new FlyWithWings();
}
void RedHeadDuck::display(){
    cout <<"I'm a RedHead Duck" << endl;
}
