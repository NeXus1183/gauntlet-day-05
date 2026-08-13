#pragma once
#include "Orc.hpp"
#include "Bat.hpp"
#include "Boss.hpp"

struct DescribeVisitor : public Visitor {
    std::string toPrint;
    void visit(Orc& o)  override
    { 
        toPrint = o.describe(); 
    }
    void visit(Bat& b)  override
    { 
        toPrint = b.describe(); 
    }
    void visit(Boss& b) override
    { 
        toPrint = b.describe(); 
    }
};