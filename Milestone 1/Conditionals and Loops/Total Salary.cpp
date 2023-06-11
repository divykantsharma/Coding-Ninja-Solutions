#include<iostream>
#include<cmath>
using namespace std;
int main() {
    double basicSalary;
    char grade; 
    double totalSalary,hra,da,allow,pf;
    cin>>basicSalary>>grade;
    if(basicSalary>=0 && basicSalary<=7500000 ){
	hra=0.2 * basicSalary;
    da=0.5 * basicSalary;
    if(grade=='A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    } 
    else{
        allow=1300;
    }
    pf=0.11*basicSalary;
    totalSalary= basicSalary + hra + da + allow - pf;
    if(round(totalSalary)>int(totalSalary))
        cout<<round(totalSalary)<<endl;
    else cout<<int(totalSalary)<<endl;
    }
    return 0;
}
