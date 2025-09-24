#include <iostream>
#include <vector>
using namespace std;

void findUnion(vector<int> &nums1, vector<int> &nums2, int size1, int size2)
{

    vector<int> nums;
    int i = 0; // o se store kro nhi to garbage value rakhenge
    int j = 0;

    while (i < nums1.size() && j < nums2.size())
    {
        // remove the duplicate in i
        if (i > 0 && nums1[i] == nums1[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && nums2[j] == nums2[j - 1])
        {
            j++;
            continue;
        }

        // now compare two arrays
        if (nums1[i] < nums2[j])
        {
            nums.push_back(nums1[i]);
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            nums.push_back(nums2[j]);
            j++;
        }
        else
        {
            nums.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    while (i < nums1.size())
    {

        if (i == 0 || nums1[i] != nums1[i - 1])
        {
            nums.push_back(nums1[i]);
        }
        i++;
    }

    while (j < nums2.size())
    {

        if (j == 0 || nums2[j] != nums2[j - 1])
        {
            nums.push_back(nums2[j]);
        }
        j++;
    }

    for (int i : nums)
    {
        cout << " " << i;
    }
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 5, 7};
    vector<int> arr2 = {2, 3, 4, 5, 6, 8, 9};

    int n = arr1.size();
    int m = arr2.size();

    // Tum yaha apna findUnion function call kar sakte ho
    findUnion(arr1, arr2, n, m);

    return 0;
}