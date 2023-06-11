#include <iostream>
using namespace std;
int main(){
    // Write your code here
    int x;
    cin >> x;
    int ap;
    int i = 1;
    int j = 1;
    while (i <= x){
        ap = ((3 * j) + 2)
        if (ap % 4 != 0){
            cout << ap << ' ';
            i++;
        }
        j++;
    }
    return 0;
}