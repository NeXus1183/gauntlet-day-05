#include "Writer.hpp"

void Writer::write(std::string path, std::string packed, unsigned sum)
{
    std::ofstream toWrite(path);
    toWrite << packed << "\n";
    toWrite.close();
    std::cout << "write     ->" << path << " (" << sum << " bytes)" << std::endl;
}