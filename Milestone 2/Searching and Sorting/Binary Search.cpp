#include <iostream>
using namespace std;
int search(vector<int>& nums, int target) {
    int n=nums.size();
    int start=0,end=n-1;
    while (start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) end=mid-1;
        else start=mid+1;
    }
    return -1;
}