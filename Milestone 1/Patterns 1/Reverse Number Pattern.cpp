#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        int val = i+1;
      while(j<=i){
        //  p=1+n-j;
        cout<<val;
        j++;
        val--;
      }
      i++;
      cout<<endl;
    }
}