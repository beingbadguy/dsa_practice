#include <iostream>
#include <string>
using namespace std;
void reverString(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        swap(str[start++], str[end--]);
    }
    for (char c : str)
    {
        cout << c;
    }
}

int main()
{
    string str = "Hello World";
    reverString(str);
    return 0;
}