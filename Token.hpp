#pragma once
#include<iostream>



enum{
  KEYWORD = 1,
  ID ,
  ARITH_OP,
  RELAT_OP,
  LOGIC_OP,
  MISC_OP,
  INT,
  STRING,
  COMMENT,
  OPEN_PARENTH,
  CLOSED_PARENTH,
  OPEN_BRACKET,
  CLOSED_BRACKET, 
  OPEN_BRACE, 
  CLOSED_BRACE,
  DOT,
  COMMA

};

void printToken(int i, std::string l, int line, int c);
