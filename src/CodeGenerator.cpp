#include "CodeGenerator.h"



void CodeGenerator::generateCode(const std::vector<SSAInstruction>& instructions) {
    for (const auto& instr : instructions) {
        std::cout << "mov " << instr.arg1 << ", %rax" << std::endl;
        std::cout << instr.op << " " << instr.arg2 << ", %rax" << std::endl;
        std::cout << "mov %rax, " << instr.result << std::endl;
    }
}
