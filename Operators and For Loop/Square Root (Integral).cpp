#include <iostream>
using namespace std;
int main(){
    // Write your code here
    int n;
    cin >> n;
    int i = 1;
    while ((i * i) <= n){
        i++;
    }
    cout << (i - 1);
    return 0;
}