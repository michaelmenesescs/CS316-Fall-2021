#include <fstream>
#include <iostream>
#include "LexicalAnalyzer.h"
#include "Token.h"
#include "TokenCodes.h"

using namespace std;



//Driver Code
int main(int argc, char *argv[])
{
  ifstream sourceCodeFile;  //Import source code file 
  LexicalAnalyzer *la;    //Instantiate Lexical Anaylzer 
  Token *nextToken;      //nextToken variable 
  TokenCodes tc;        //Token Codes 

  sourceCodeFile.open(argv[1], ifstream::in);  //Opens file
  if  (sourceCodeFile.is_open())   
  {
    la = new LexicalAnalyzer(&sourceCodeFile);  //Pass source to Lexical Analyzer object
    do
    {
      nextToken = la->getNextToken(); //nextToken returns a token which contains (token symbol, lexeme string and the integer value of the token) 
      cout << *nextToken << endl;    //Print token 
      tc = nextToken->getTokenCode(); //Fetch code from TokenCodes.h
      delete nextToken;
    } while (tc != EOI);
    delete la;
  }
  else
    printf("ERROR - cannot open input file \n");
  return 0;
}