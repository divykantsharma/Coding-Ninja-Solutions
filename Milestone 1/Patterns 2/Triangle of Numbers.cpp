#include <iostream>
using namespace std;
int main(){
    /*
        Read input as specified in the question.
        Print output as specified in the question.
    */
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = i; j < n; j++){
            cout << ' ';
        }
        int p = i;
        for (int j = 1; j < i; j++, p++){
            cout << p;
        }
        for (int j = 1; j <= i; j++, p--){
            cout << p;
        }
        cout << endl;
    }
}