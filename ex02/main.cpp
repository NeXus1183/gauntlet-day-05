#include <vector>
#include <memory>
#include "DescribeVisitor.hpp"
#include "TotalHpVisitor.hpp"
#include "Entity.hpp"

int main()
{
    DescribeVisitor describe;
    TotalHpVisitor  totalHp;
    std::vector<std::unique_ptr<Entity>> entities;
    entities.push_back(std::make_unique<Orc>());
    entities.push_back(std::make_unique<Bat>());
    entities.push_back(std::make_unique<Boss>());
    std::cout << "-- describe --" << std::endl;
    for (const auto& e : entities) 
    {
        e->accept(describe);
        std::cout << describe.toPrint << std::endl;
    }
    std::cout << "-- total hp --" << std::endl;
    for (const auto& e : entities)
    {
        e->accept(totalHp);
    }
    std::cout << totalHp.total << '\n';
}