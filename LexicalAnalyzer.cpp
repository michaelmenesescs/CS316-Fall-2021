#include <iostream>
#include <fstream>

#include "LexicalAnalyzer.h"
#include "Token.h"
#include "TokenCodes.h"




//The lexical analyzer processes the line one character at time looking for just the next token, 
//stopping at the character right after the last character of the next token. 
//Therefore, getNextToken method returns the next token in the ADALS1 program source code file.
LexicalAnalyzer::LexicalAnalyzer(ifstream *scf)
{
  sourceCodeFile = scf;

  std::string line;
  while (std::getline(sourceCodeFile, line)))
  {
    cout << line << endl;
  }
  




}

int LexicalAnalyzer::getCurrentCharPositionNumber()
{
  return 0;
}


//getNextToken method returns the next token in the ADALS1 program source code file.
Token* LexicalAnalyzer::getNextToken()
{
  Token *t;



  return t;
}
