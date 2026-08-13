#pragma once
#include "Checksum.hpp"
#include "Compressor.hpp"
#include "Serializer.hpp"
#include "Writer.hpp"

class SaveGameFacade
{
public:
    void save(const GameState& state, const std::string& path);
    SaveGameFacade(){}
    ~SaveGameFacade(){}
private:
    Serializer m_serializer;
    Compressor m_compressor;
    Checksum m_checksum;
    Writer m_writer;
};