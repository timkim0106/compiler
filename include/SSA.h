#ifndef SSA_H
#define SSA_H

#include <vector>
#include <string>
#include <iostream>

struct SSAInstruction {
    std::string op;
    std::string arg1, arg2, result;
    void print() const;
};

class SSA {
public:
    std::vector<SSAInstruction> instructions;
    void emit(const std::string& op, const std::string& arg1, const std::string& arg2, const std::string& result);
    void print() const;
};

#endif
