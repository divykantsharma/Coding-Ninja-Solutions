#include<iostream>
using namespace std;
void check(char ch){
    if(ch>='A' && ch<='Z') cout<<"1\n";
    else if(ch>='a' && ch<='z') cout<<"0\n";
    else cout<<-1;
}
int main(){
    char ch;
    cin>>ch;
    check(ch);
}