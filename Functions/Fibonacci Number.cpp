#include <iostream>
using namespace std;
bool checkMember(int n){
    int t1 = 0;
    int t2 = 1;
    while (t1 <= n){
        if (t1 == n){
            return true;
        }
        int t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return false;
}
