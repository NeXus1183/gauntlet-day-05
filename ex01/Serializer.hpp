#pragma once
#include <string>
#include <iostream>
#include "GameState.hpp"

class Serializer 
{
public:
    std::string serialize(const GameState& state);
    Serializer(){};
    ~Serializer(){};
};
