#include <iostream>
#include <string>
using namespace std;
bool isValidPalindrom(string str)
{
    int start = 0;
    int end = str.length() - 1;
    while (start <= end)
    {
        if (str[start] == str[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    // string str = "nitin";
    string str = "jatin";
    bool isPalindrome = isValidPalindrom(str);
    cout << isPalindrome;
    return 0;
}