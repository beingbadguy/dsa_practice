#include<iostream>
#include<vector>
using namespace std;

void moveAllToNegative(vector<int>&nums){

    int left = 0;
    int right = nums.size() - 1;

    while(left<=right){
        if(nums[left]< 0 && nums[right]<0){
            left++; // chote hai dono element to bss left ko aage badhao
        }
        // agar right wala bda hai to swap krde left waale se
        else if(nums[left]>=0 && nums[right]<0){
            swap(nums[left], nums[right]);
            left++;
            right--;
        }

        else if(nums[left]>=0 && nums[right]>=0){
            right--;
        }
        else{
            right--;
            left++;
        }
    }

    for(int i: nums){
        cout << " " << i;
    }
}

int main(){
    vector<int> nums = {1, -2, 3, -4, -5, 6};
    moveAllToNegative(nums);
    return 0;
}