#ifndef PARSER_H
#define PARSER_H

#include "Lexer.h"

class Parser {
public:
    Parser(Lexer& lexer);
    int parseExpression();
private:
    Lexer& lexer;
    Token currentToken;
    void advance();
    int parseTerm();
};

#endif
