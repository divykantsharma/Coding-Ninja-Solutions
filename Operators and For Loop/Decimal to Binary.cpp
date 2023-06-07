#include <iostream>
using namespace std;
long long int calPow(int x, int n){
    if (n == 0){
        return 1;
    }
    else{
        long long int ans = 1;
        long long int i = 1;
        while (i <= n){
            ans *= x;
            i++;
        }
        return ans;
    }
}
int main(){
    // Write your code here
    long long int decimal;
    cin >> decimal;
    long long int binary = 0;
    long long int count = 0;
    while (decimal){
        long long int rem = decimal % 2;
        binary = binary + (rem * calPow(10, count));
        count++;
        decimal = decimal / 2;
    }
    cout << binary;
    return 0;
}