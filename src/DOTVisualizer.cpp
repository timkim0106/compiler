#include "DOTVisualizer.h"

void DOTVisualizer::visualize(const std::vector<SSAInstruction>& instructions) {
    std::cout << "digraph SSA {" << std::endl;
    for (const auto& instr : instructions) {
        std::cout << "  " << instr.result << " [label=\"" << instr.result << " = "
                  << instr.arg1 << " " << instr.op << " " << instr.arg2 << "\"];" << std::endl;
    }
    std::cout << "}" << std::endl;
}
