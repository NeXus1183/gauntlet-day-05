#include "Writer.hpp"

void Writer::write(std::string path, std::string packed, unsigned sum)
{
    std::ofstream toWrite(path);
    toWrite << packed << "\n";
    toWrite << sum << "\n";
    toWrite.close();
    std::cout << "write     ->" << path << " (" << sum << " bytes)" << std::endl;
}