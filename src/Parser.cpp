#include "Parser.h"
#include <stdexcept>

Parser::Parser(Lexer& lexer) : lexer(lexer), currentToken(lexer.getNextToken()) {}

void Parser::advance() {
    currentToken = lexer.getNextToken();
}

int Parser::parseTerm() {
    if (currentToken.type != TOK_INT) {
        throw std::runtime_error("Expected integer");
    }
    int value = std::stoi(currentToken.value);
    advance();
    return value;
}

int Parser::parseExpression() {
    int result = parseTerm();
    while (currentToken.type == TOK_PLUS || currentToken.type == TOK_MINUS) {
        if (currentToken.type == TOK_PLUS) {
            advance();
            result += parseTerm();
        } else if (currentToken.type == TOK_MINUS) {
            advance();
            result -= parseTerm();
        }
    }
    return result;
}
