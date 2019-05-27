#include <iostream>
#include <string>

using namespace std;

void RecSubsets(string soFar, string rest){
    //cout << "subset(" + soFar + "," + rest + ")";
    if (rest ==""){
        cout << soFar << endl;
    }else{
        RecSubsets(soFar +rest[0], rest.substr(1));
        RecSubsets(soFar, rest.substr(1));
    }
}

void ListPermutations(string s){
    RecSubsets("",s);
}

int main() 
{
    while(true){
    cout << "Type some string:";
    string s;
    getline(cin, s);
    ListPermutations(s);
    }

} 
