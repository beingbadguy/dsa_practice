#include <iostream>
using namespace std;

void mooreVoting(int arr[], int size)
{
    int candidate = arr[0];
    int count = 1;

    for (int i = 1; i < size; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count++;
        }
        else if (candidate == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // now confirmation of the count
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (candidate == arr[i])
        {
            count++;
        }
    }
    // cout << "this is the count here : " << count;

    if (count > size / 2)
    {
        cout << "the majority element of the array is : " << candidate << endl;
    }
    else
    {
        cout << "this array doesnt have any majority element";
    }
}

int main()
{

    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    cout << endl;

    int size = sizeof(arr) / sizeof(arr[0]);

    mooreVoting(arr, size);
    cout << endl;

    return 0;
}