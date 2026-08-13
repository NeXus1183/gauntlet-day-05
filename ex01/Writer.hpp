#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Writer
{
public:
    void write(std::string path, std::string packed, unsigned sum);
    Writer(){};
    ~Writer(){};
};
