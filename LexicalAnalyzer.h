#ifndef LEXICALANALYZER_H
#define LEXICALANALYZER_H

#include <fstream>

#include "Token.h"
#include "TokenCodes.h"


//Cannot change code. All data and methods members must be private
class LexicalAnalyzer
{
  private:
    ifstream *sourceCodeFile;


  public:
    LexicalAnalyzer(ifstream*);
    int getCurrentCharPositionNumber();
    Token* getNextToken();
};

#endif