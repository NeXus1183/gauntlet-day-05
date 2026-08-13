#pragma once
#include "Visitor.hpp"

class Entity 
{
public:
    virtual std::string describe() const= 0;
    virtual void accept(Visitor& visitor) = 0;
    virtual ~Entity(){}
};