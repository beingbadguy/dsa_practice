#include <iostream>
#include <vector>
using namespace std;

void cycleArray(vector<int> &binary)
{

    int size = binary.size() - 1;
    if (size == 0)
        return;

    int lastElement = binary[size];

    for (int i = size; i > 0; i--)
    {
        binary[i] = binary[i - 1];
    }
    binary[0] = lastElement;

    for (int i : binary)
    {
        cout << " " << i;
    }
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};
    cycleArray(nums);
    return 0;
}