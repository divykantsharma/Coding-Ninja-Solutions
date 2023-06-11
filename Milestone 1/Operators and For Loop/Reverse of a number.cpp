#include <iostream>
using namespace std;
int main(){
    // Write your code here
    int num;
    cin >> num;
    int revNum = 0;
    while (num){
        int rem = num % 10;
        revNum = ((revNum * 10) + rem);
        num = num / 10;
    }
    cout << revNum;
    return 0;
}