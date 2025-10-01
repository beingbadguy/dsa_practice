#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int reachEnd(vector<int> &nums, int n)
{
    int jumps = 0;
    int currEnd = 0;
    int farthest = 0;
    for (int i = 0; i < n - 1; i++)
    {
        farthest = max(farthest, i + nums[i]);
        if (i == currEnd)
        {
            jumps++;
            currEnd = farthest;
        }
        if (currEnd >= n - 1)
            break;
    }

    return (currEnd >= n - 1) ? jumps : -1;
}
int main()
{
    vector<int> vector = {2, 3, 1, 1, 4};
    int size = vector.size();
    int jumps = reachEnd(vector, size);
    cout << "jumps needed to reach to the end : " << jumps;
    return 0;
}