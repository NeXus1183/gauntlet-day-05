#pragma once

class Entity 
{
public:
    virtual std::string describe() const= 0;
    virtual ~Entity() = default;
};