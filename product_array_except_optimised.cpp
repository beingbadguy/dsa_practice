#include <iostream>
#include <vector>
using namespace std;

void productArray(vector<int> &arr)
{
    int n = arr.size();
    vector<int> answer(n, 1);
    int prefix = 1;

    for (int i = 1; i < n; i++)
    {
        answer[i] = prefix;
        prefix = prefix * arr[i];
    }
    int suffix = 1;
    for (int j = n - 1; j >= 0; j--)
    {
        answer[j] *= suffix;
        suffix *= arr[j];
    }

    for (int i : answer)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4};
    productArray(numbers);
    return 0;
}