#pragma once
#include <string>
#include <iostream>
#include "Entity.hpp"

class Bat : public Entity
{
public:
    Bat(std::string name = "Bat", int hp = 8)
    {
        m_name = name;
        m_hp = hp;
    }
    std::string describe() const override
    {
        return "Bat (hp 8)";
    }
    int hp() const
    { 
        return 8; 
    }
    void accept(Visitor& v) override
    { 
        v.visit(*this); 
    } 
    ~Bat(){}
private:
    std::string m_name;
    int m_hp;
};