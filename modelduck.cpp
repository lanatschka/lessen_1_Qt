#include "modelduck.h"

ModelDuck::ModelDuck()
{
   flyBehavior = new FlyRocketPowered();
   quackBehavior = new Quack();
}
void ModelDuck::display(){
    cout <<"I'm a Model Duck"<<endl;
}
