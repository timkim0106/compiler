#include "SSA.h"

void SSAInstruction::print() const {
    std::cout << result << " = " << arg1 << " " << op << " " << arg2 << std::endl;
}

void SSA::emit(const std::string& op, const std::string& arg1, const std::string& arg2, const std::string& result) {
    instructions.push_back({op, arg1, arg2, result});
}

void SSA::print() const {
    for (const auto& instr : instructions) {
        instr.print();
    }
}
