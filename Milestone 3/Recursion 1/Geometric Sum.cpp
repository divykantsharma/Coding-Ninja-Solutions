#include<climits>
double geometricSum(int k) {
    // Write your code here
    if(k==0){
        return 1;
    }
	double ans=geometricSum(k-1);
    return 1/(pow(2,k))+ans;
}


