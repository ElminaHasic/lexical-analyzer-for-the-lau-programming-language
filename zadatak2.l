%option noyywrap

%{
#include "Token.hpp"
int column = 0, line=1;
%}

id [a-zA-Z_][a-zA-Z_0-9]*
LOG_OP (and|or|not)
numbers [\+]?[-]?[0-9]+\.?[0-9]*([eE][\+-]?[0-9]+?)?
hexnumbers 0x[0-9a-fA-F]+ 
keywords (and|break|do|else|elseif|end|false|for|function|if|in|local|nil|not|or|repeat|require|return|then|true|until|while)
ws [ \s\t] 
AR_OP (\+|-|\*|\/|\^|%)
REL_OP (==|~=|>=|<=|<|>)
M_OP (#|\.{2}|={1}|:|;)

%%

--.*         {++column;return COMMENT;}
'[^']*'      {++column; return STRING;}
\"[^\"]*\"   {++column; return STRING;} 
{LOG_OP}     {++column; return LOGIC_OP;}
{AR_OP}      {++column; return ARITH_OP;}
{REL_OP}     {++column; return RELAT_OP;}
{M_OP}       {++column; return MISC_OP;}
{keywords}   {++column; return KEYWORD;}
{hexnumbers} {++column; return INT;}

{id} {++column;  return ID;}
{numbers} {++column; return INT;}

"(" {++column; return OPEN_PARENTH;}
")" {++column; return CLOSED_PARENTH;}
"[" {++column; return OPEN_BRACKET;}
"]" {++column; return CLOSED_BRACKET;}
"{" {++column; return OPEN_BRACE;}
"}" {++column; return CLOSED_BRACE;}
"," {++column; return COMMA;}
\.  {++column; return DOT;}
\n  {++line; column = 0;}
{ws} {++column; }


%%


int main(){

int id;
std::string leksem;

while((id = yylex())){

leksem= "";
for(int i = 0; i< yyleng ; ++i)
{
   leksem = leksem + yytext[i];
}


printToken(id, leksem, line,column);

if(yyleng > 1)
column+=yyleng-1;

}

return 0;

}
