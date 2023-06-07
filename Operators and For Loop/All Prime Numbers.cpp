#include <iostream>
using namespace std;
int main(){
    /*
        Read input as specified in the question.
        Print output as specified in the question.
    */
    int n;
    cin >> n;
    if (n >= 2){
        for (int num = 2; num <= n; num++){
            bool isPrime = true;
            for (int div = 2; div < num; div++){
                if (num % div == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                cout << num << endl;
            }
        }
    }
}