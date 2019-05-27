

#include <iostream>
#include "lexicon.h"


using namespace std;

bool IsAnagram(string soFar, string rest, Lexicon &lex)
{
    if (rest ==""){
        return lex.containsWord(soFar);
    }else{
        for ( int i =0; i < rest.length(); i++){
            string next = soFar + rest[i];
            string remaining = rest.substr(0,i) + rest.substr(i+1);
            //cout << "rest: " + rest.substr(i+1) <<endl;
            //cout << "next: " + next <<endl;
            //cout << "remaining: " + remaining <<endl;
            //  cout << endl;
            if (IsAnagram(next, remaining, lex)) return true;
        }
    }
    return false;
}

bool IsAnagramWord(string s, Lexicon &lex)
{
    return IsAnagram("", s, lex);
}


int main() 
{
    Lexicon lex("lexicon.dat");
    while(true){
        cout << "Type some string:";
        string s;
        getline(cin, s);
        cout << IsAnagramWord(s,lex) << endl;
    }
    return 0;

} 