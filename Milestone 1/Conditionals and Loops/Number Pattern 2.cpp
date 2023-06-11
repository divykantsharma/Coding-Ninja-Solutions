#include<iostream>
using namespace std;
int main(){
    int N, count  = 0;
    cin>>N;
    int spaceCount=N-1;
    for(int i = 1; i <= N; i++, spaceCount--){ 
        int space = spaceCount;
        while(space>0){
            cout<<" ";
            space--;
        }
        count = i;
        for(int j = 1; j <= i; j++, count++){   
            cout<<count;
        }
        cout<<endl;
    }
   return 0; 
}