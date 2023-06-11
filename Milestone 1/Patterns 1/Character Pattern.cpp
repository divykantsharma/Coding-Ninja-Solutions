#include<iostream>
using namespace std;
int main(){
	int n;
    cin>>n;
    int i = 1;
    while(i <= n) {
        char ch = 'A' + i - 1;
        int j = 1;
        while(j <= i) {
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}