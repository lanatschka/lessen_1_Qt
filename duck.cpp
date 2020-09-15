#include "duck.h"

Duck::Duck()
{

}
void Duck::performFly(){
    flyBehavior->fly();
}

void Duck::performQuack(){
    quackBehavior->quack();
}
void Duck::swim(){
    cout <<"All ducks float, even decoys!" << endl;
}
