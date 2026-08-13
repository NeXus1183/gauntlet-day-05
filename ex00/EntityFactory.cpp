#include "EntityFactory.hpp"

std::unique_ptr<Entity> EntityFactory::make(const std::string& kind)
{
    if (kind == "orc")
    {
        return std::make_unique<Orc>();
    }
    else if (kind == "bat") 
    {
        return std::make_unique<Bat>();
    }
    else if (kind == "boss")
    {
        return std::make_unique<Boss>();
    }
    return nullptr;
}
