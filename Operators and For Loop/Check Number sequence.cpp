#include <iostream>
using namespace std;
int main(){
    // Write your code here
    int n;
    cin >> n;
    int prev;
    int current;
    cin >> prev;
    bool isDec = true;
    bool isInc = false;
    int i = 2;
    while (i <= n){
        cin >> current;
        if (current > prev){
            isInc = true;
        }
        else if (current < prev){
            if (isDec == true && isInc == false){
                isDec = true;
            }
            else{
                isDec = false;
            }
        }
        else{
            isDec = false;
            isInc = false;
        }
        prev = current;
        i++;
    }
    if (isDec){
        cout << "true";
    }
    else{
        cout << "false";
    }
}