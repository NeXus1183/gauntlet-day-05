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
        std::string toDisplay = m_name + " (hp " + std::to_string(m_hp) + ")";
        return toDisplay;
    }
    ~Orc(){};
private:
    std::string m_name;
    int m_hp;
};