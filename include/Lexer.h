#ifndef LEXER_H
#define LEXER_H

#include <iostream>
#include <string>

enum TokenType { TOK_INT, TOK_PLUS, TOK_MINUS, TOK_EOF, TOK_UNKNOWN };

struct Token {
    TokenType type;
    std::string value;
};

class Lexer {
public:
    Lexer(const std::string& input);
    Token getNextToken();
private:
    std::string input;
    size_t pos;
};

#endif
