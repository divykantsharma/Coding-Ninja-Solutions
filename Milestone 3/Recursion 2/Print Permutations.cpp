#include <iostream>
#include <string>
using namespace std;
void permutations(string str, int i, int n){
    if (i == n - 1){
        cout << str << endl;
        return;
    }
    for (int j = i; j < n; j++){
        swap(str[i], str[j]);      
        permutations(str, i + 1, n);
        swap(str[i], str[j]);
    }
}
void printPermutations(string input){
    permutations(input,0,input.length());
}
