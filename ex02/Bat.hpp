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
        std::string toDisplay = m_name + " (hp " + std::to_string(m_hp) + ")";
        return toDisplay;
    }
    ~Bat(){};
private:
    std::string m_name;
    int m_hp;
};