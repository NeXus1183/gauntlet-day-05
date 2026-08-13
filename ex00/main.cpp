#include <iostream>
#include <vector>
#include "EntityFactory.hpp"

int main()
{
    EntityFactory factory;
    std::vector<std::string> kinds = {"orc", "bat", "boss", "bat"};
    for (const auto& kind : kinds) 
    {
        auto e = factory.make(kind);
        std::cout << "spawned " << e->describe() << '\n';
    }
}
