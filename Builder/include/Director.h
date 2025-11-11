#pragma once    
#include "Builder.h"

class Director
{
private:
    Builder* builder;
public:
    Director(Builder* builder);
    ~Director();
    void setBuilder(Builder* builder);
    Arma construct();
};
