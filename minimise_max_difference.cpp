#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void minimizeMax(vector<int> &nums, int p, int n)
{
    sort(nums.begin(), nums.end());

    int result = nums[n - 1] - nums[0];

    for (int i = 1; i < n; i++)
    {
        int minH = min(nums[0] + p, nums[i] - p);
        int maxH = max(nums[i - 1] + p, nums[n - 1] - p);
        if (minH < 0)
            continue;
        result = min(result, maxH - minH);
    }
    cout << "\n this is the min of the max diff : " << result << endl;
}

int main()
{
    vector<int> arr = {10, 1, 2, 7, 1, 3};
    int size = arr.size();
    int p = 2;
    minimizeMax(arr, p, size);
    return 0;
}