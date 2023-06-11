#include<iostream>
using namespace std;
int main() {
    int N;
    int sum_e=0, sum_o=0;
    cin>>N;
    while(N>0){
        int r=N%10;
        if(r%2==0){
            sum_e+=r;
        }
        else{
            sum_o+=r;
        }
        N=N/10;
    }
    cout<<sum_e<<" "<<sum_o<<endl;
}
