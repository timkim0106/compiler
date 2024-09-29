#include "Lexer.h"
#include <cctype>

Lexer::Lexer(const std::string& input) : input(input), pos(0) {}

Token Lexer::getNextToken() {
    while (pos < input.size()) {
        if (isspace(input[pos])) {
            pos++;
            continue;
        }

        if (isdigit(input[pos])) {
            std::string value;
            while (pos < input.size() && isdigit(input[pos])) {
                value += input[pos++];
            }
            return Token{TOK_INT, value};
        }

        if (input[pos] == '+') {
            pos++;
            return Token{TOK_PLUS, "+"};
        }
        if (input[pos] == '-') {
            pos++;
            return Token{TOK_MINUS, "-"};
        }

        return Token{TOK_UNKNOWN, std::string(1, input[pos++])};
    }

    return Token{TOK_EOF, ""};
}
