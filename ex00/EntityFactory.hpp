#pragma once
#include <memory>
#include "Bat.hpp"
#include "Boss.hpp"
#include "Orc.hpp"

class EntityFactory
{
public:
    std::unique_ptr<Entity> make(const std::string& kind);
    EntityFactory(){};
    ~EntityFactory(){};
};
