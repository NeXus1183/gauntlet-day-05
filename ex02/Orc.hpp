#pragma once
#include <string>
#include <iostream>
#include "Entity.hpp"

class Orc : public Entity
{
public:
    Orc(std::string name = "Orc", int hp = 40)
    {
        m_name = name;
        m_hp = hp;
    }
    std::string describe() const override
    {
        return "Orc (hp 40)";
    }
    int hp() const
    { 
        return 40; 
    }
    void accept(Visitor& v) override
    { 
        v.visit(*this); 
    } 
    ~Orc(){}
private:
    std::string m_name;
    int m_hp;
};