#include <iostream>
using namespace std;
int main(){
    /*
        Read input as specified in the question.
        Print output as specified in the question.
    */
    int c;
    c = cin.get();
    int count_char = 0, count_digits = 0, count_whspace = 0;
    while (c != '$'){
        if (c >= 97 && c <= 122){
            count_char++;
        }
        else if (c >= 48 && c <= 57){
            count_digits++;
        }
        else if (c == ' ' || c == '\t' || c == '\n'){
            count_whspace++;
        }
        c = cin.get();
    }
    cout << count_char << ' ' << count_digits << ' ' << count_whspace;
}