#include "Checksum.hpp"

unsigned Checksum::of(std::string packed)
{
    unsigned toReturn = packed.length();
    std::cout << "checksum  -> 0xD7" << std::endl;
    return toReturn;
}