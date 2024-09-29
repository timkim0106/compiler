#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H

#include "SSA.h"

class CodeGenerator {
public:
    void generateCode(const std::vector<SSAInstruction>& instructions);
};

#endif
