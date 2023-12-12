#include "Token.hpp"

void printToken(int i, std::string l, int line, int c) {
  switch (i) {
    case ID:
      std::cout << "<ID, " << l << ">: line "<<line<<", column "<<c << std::endl;
      break;

    case KEYWORD:
      std::cout << "<KEYWORD, " << l << ">: line "<<line<<", column "<<c<< std::endl;
      break;
    case ARITH_OP:
      std::cout << "<ARITH_OP, " << l << ">: line "<<line<<", column "<<c << std::endl;
      break;
    case LOGIC_OP:
      std::cout << "<LOGIC_OP, " << l << ">: line "<<line<<", column "<<c  << std::endl;
      break;
    case MISC_OP:
      std::cout << "<MISC_OP, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case INT:
      std::cout << "<INT, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case STRING:
      std::cout << "<STRING, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case COMMENT:
      std::cout << "<COMMENT, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case OPEN_PARENTH:
      std::cout << "<OPEN_PARENTH, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case CLOSED_PARENTH:
      std::cout << "<CLOSED_PARENTH, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case OPEN_BRACKET:
      std::cout << "<OPEN_BRACKET, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case CLOSED_BRACKET:
      std::cout << "<CLOSED_BRACKET, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case OPEN_BRACE:
      std::cout << "<OPEN_BRACE, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case CLOSED_BRACE:
      std::cout << "<CLOSED_BRACE, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case DOT:
      std::cout << "<DOT, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
    case COMMA:
      std::cout << "<COMMA, " << l << ">: line "<<line <<", column "<<c << std::endl;
      break;
  }

 }
