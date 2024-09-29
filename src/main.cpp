#include "Lexer.h"
#include "Parser.h"
#include "SSA.h"
#include "CodeGenerator.h"
#include "DOTVisualizer.h"

int main() { 

    
    std::string input = "5 + 3 - 2";
    Lexer lexer(input);
    Parser parser(lexer);
    int result = parser.parseExpression();
    std::cout << "Parsed result: " << result << std::endl;

    SSA ssa;
    ssa.emit("+", "5", "3", "t1");
    ssa.emit("-", "t1", "2", "t2");

    std::cout << "SSA Representation:" << std::endl;
    ssa.print();

    CodeGenerator codeGen;
    std::cout << "\nGenerated Assembly Code:" << std::endl;
    codeGen.generateCode(ssa.instructions);

    DOTVisualizer visualizer;
    std::cout << "\nDOT Visualization:" << std::endl;
    visualizer.visualize(ssa.instructions);

    return 0;
}
