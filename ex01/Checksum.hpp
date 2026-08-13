#pragma once
#include <string>
#include <vector>
#include <iostream>

class Checksum
{
public:
    unsigned of(std::string packed);
    Checksum(){};
    ~Checksum(){};
};
