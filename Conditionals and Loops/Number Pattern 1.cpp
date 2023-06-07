#include<iostream>
using namespace std;
int main(){
    int N, count  = 0;
    cin>>N;
    for(int i = 1; i <= N; i++){
        cout<<i;
        for(int j = 1; j < i; j++){   
        count = j + i;
        cout<<count;
        }
        cout<<endl;
    }
   return 0; 
}