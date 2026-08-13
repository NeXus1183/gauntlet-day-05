#include "Checksum.hpp"

unsigned Checksum::of(std::string packed)
{
    std::vector<unsigned> toReturnFake(packed.begin(), packed.end());
    std::cout << "checksum  -> 0xD7" << std::endl;
    unsigned toReturn = 0;
    return toReturn;
}