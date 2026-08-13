#pragma once
#include <string>
#include <iostream>
#include "Entity.hpp"

class Boss : public Entity
{
public:
    Boss(std::string name = "Boss", int hp = 300)
    {
        m_name = name;
        m_hp = hp;
    }
    std::string describe() const override
    {
        return "Boss (hp 300)";
    }
    int hp() const
    { 
        return 300; 
    }
    void accept(Visitor& v) override
    { 
        v.visit(*this); 
    } 
    ~Boss(){}
private:
    std::string m_name;
    int m_hp;
};