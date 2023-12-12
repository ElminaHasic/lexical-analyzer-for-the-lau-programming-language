all:
	flex zadatak2.l
	g++ lex.yy.c function.cpp -o zadatak2 -lfl

