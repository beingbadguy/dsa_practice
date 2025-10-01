#include <iostream>
#include <vector>
using namespace std;
void searchRotatedArray(vector<int> &numbers, int target)
{

    int start = 0;
    int end = numbers.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (numbers[mid] ==  target)
        {
            cout << "TARGET FOUND AT INDEX : " << mid << endl;
            cout << "TARGET FOUND : " <<numbers[mid] << endl;
            return;
        }

        if (numbers[start] < numbers[mid])
        {
            // left wala sorted hai
            if (target >= numbers[start] && target < numbers[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            // right wala sorted hai
            if (target > numbers[mid] && target <= numbers[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
}
int main()
{
    vector<int> numbers = {4, 5, 6, 7, 0, 1, 2};
    searchRotatedArray(numbers, 7);
    return 0;
}