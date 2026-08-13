#include "Compressor.hpp"

std::string Compressor::compress(std::string text)
{
    std::string toReturn = text;
    auto start = toReturn.begin();
    auto last = toReturn.begin() + 6;
    toReturn.erase(start,last);
    start = toReturn.begin() + 2;
    last = toReturn.begin() + 5;
    toReturn.erase(start,last);
    std::cout << "compress  -> " << toReturn << "(" << text.length() << " -> " << toReturn.length() << " bytes)" << std::endl;
    return toReturn;
}