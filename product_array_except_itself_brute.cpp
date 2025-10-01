#include <iostream>
#include <vector>
using namespace std;
void productArray(vector<int> &nums)
{
    // i am doing brute force appraoch
    int n = nums.size();
    vector<int> result(n, 1);
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                product *= nums[j];
                result[i] = product;
            }
        }
    }
    for (auto i : result)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    productArray(nums);
    return 0;
}