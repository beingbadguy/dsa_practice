#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void kthMax(vector<int> &nums, int k)
{

    sort(nums.begin(), nums.end());
    int kth_max = nums[nums.size() - k];
    cout << "the kth max is numebr number in the array is : " << kth_max << endl;
}
void kthMin(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int kth_min = nums[k - 1];
    cout << "the kth min is numebr number in the array is : " << kth_min;
}

int main()
{
    vector<int> nums = {2, 3, -2, 4};

    kthMax(nums, 1);
    kthMin(nums, 1);
    return 0;
}