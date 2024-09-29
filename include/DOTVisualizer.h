#ifndef DOTVISUALIZER_H
#define DOTVISUALIZER_H

#include "SSA.h"

class DOTVisualizer {
public:
    void visualize(const std::vector<SSAInstruction>& instructions);
};

#endif
