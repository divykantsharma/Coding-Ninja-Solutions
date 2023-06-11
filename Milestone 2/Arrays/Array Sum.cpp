#include <iostream>
using namespace std;
int main(){
    int i;
    int n,sum;
    cin>>n;
    int array[1000000];
    for(i=0;i<n;i++){
    cin>>array[i];
    }
    for(i=0;i<n;i++){
        sum =sum + array[i];
    }    
    cout<<sum;
}
