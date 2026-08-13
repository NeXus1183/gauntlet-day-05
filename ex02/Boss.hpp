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
        std::string toDisplay = m_name + " (hp " + std::to_string(m_hp) + ")";
        return toDisplay;
    }
    ~Boss(){};
private:
    std::string m_name;
    int m_hp;
};