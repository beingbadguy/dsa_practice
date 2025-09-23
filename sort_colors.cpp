#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int> &nums){

    int l = 0;
    int m = 0;
    int h = nums.size() - 1;

    while(m<=h){
        if(nums[m]==0){
            swap(nums[m], nums[l]);
            l++, m++;
        }
        else if(nums[m]==1){
            m++;
        }
        else { //2
            swap(nums[h], nums[m]);
            h--;
        }
    }

    for(int i:nums){
        cout << " " << i;
    }
}

int main(){

    vector<int> binary = {2, 1, 0, 1, 2, 0, 2, 1, 0, 2, 0, 2, 1};
    sortColors(binary);
    return 0;
}