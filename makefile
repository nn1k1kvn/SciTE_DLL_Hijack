# Makefile for test.dll project

all: SciLexer.dll

SciLexer.dll: SciLexer.o
	dllwrap SciLexer.o -o SciLexer.dll

SciLexer.o: SciLexer.cpp
	g++ -c SciLexer.cpp -o SciLexer.o
	
clean:
	del SciLexer.o
	
# g++ -c SciLexer.cpp -o SciLexer.o
# dllwrap SciLexer.o -o SciLexer.dll
# del  SciLexer.o