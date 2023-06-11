#include <string.h>
using namespace std;
void helper(string input, string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }
    char start = 'a' + (input[0]-'0')-1;
    helper(input.substr(1),output+start);
    char start2;
    int firstnum = 10*(input[0]-'0')+(input[1]-'0');
    
    if(firstnum>=10 && firstnum<=26)
    {
        start2='a'+firstnum-1;
        helper(input.substr(2),output+start2);
    }
}
void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output = "";
    helper(input,output);
}
