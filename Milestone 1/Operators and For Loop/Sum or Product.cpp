#include <iostream>
using namespace std;
int main(){
    // Write your code here
    int N, C;
    cin >> N >> C;
    if (C == 1){
        int sum = 0;
        for (int i = 1; i <= N; i++){
            sum += i;
        }
        cout << sum;
    }
    else if (C == 2){
        int product = 1;
        for (int i = 1; i <= N; i++){
            product *= i;
        }
        cout << product;
    }
    else{
        cout << -1;
    }
    return 0;
}
