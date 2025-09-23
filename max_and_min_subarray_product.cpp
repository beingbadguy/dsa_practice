#include <iostream>
#include <vector>
using namespace std;

void max_subarray_product(vector<int> &nums)
{
    int maxProduct = nums[0];
    int minProduct = nums[0];
    int result = nums[0];
    int minResult = nums[0];

    for (int k = 1; k < nums.size(); k++)
    {
        int i = nums[k];

        if (i < 0)
            swap(maxProduct, minProduct);

        maxProduct = max(i, i * maxProduct);
        minProduct = min(i, i * minProduct);

        result = max(result, maxProduct);
        minResult = min(minResult, minProduct);
    }

    cout << "The max subarray product is : " << result << endl;
    cout << "The min subarray product is : " << minResult << endl;
}

int main()
{
    vector<int> binary = {2, 3, -2, 4};
    max_subarray_product(binary);
    return 0;
}