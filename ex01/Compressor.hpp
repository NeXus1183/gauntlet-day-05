#pragma once
#include <string>
#include <iostream>

class Compressor
{
public:
    std::string compress(std::string text);
    Compressor(){};
    ~Compressor(){};
};