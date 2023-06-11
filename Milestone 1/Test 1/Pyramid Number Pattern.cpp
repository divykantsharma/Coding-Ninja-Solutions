#include <iostream>
using namespace std;
int main(){
    // Write your code here
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = i; j < n; j++){
            cout << ' ';
        }
        int j = i;
        for (; j > 1; j--){
            cout << j;
        }
        for (; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}