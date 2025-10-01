#include <iostream>
#include <vector>
using namespace std;

void peakMountainArray(vector<int> &numbers)
{
    int start = 0;
    int end = numbers.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (numbers[mid] < numbers[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    cout << "THE PEAK INDEX IS : " << start << endl;
    cout << "THE PEAK ELEMENT IS : " << numbers[start] << endl;
}

int main()
{
    vector<int> numbers = {1, 3, 5, 7, 6, 4, 2};
    peakMountainArray(numbers);
    return 0;
}