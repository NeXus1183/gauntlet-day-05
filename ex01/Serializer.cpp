#include "Serializer.hpp"

std::string Serializer::serialize(const GameState& state)
{
    std::string toReturn = "level=" + std::to_string(state.level) + ";" + std::string("hp=") + std::to_string(state.hp);
    std::cout << "serialize -> " << toReturn << std::endl;
    return toReturn;
}