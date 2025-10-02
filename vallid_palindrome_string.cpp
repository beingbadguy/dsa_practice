#include <iostream>
#include <string>
using namespace std;

bool isAlpha(char ch)
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
}
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
        else if (!isAlpha(str[start]))
        {
            start++;
        }
        else if (!isAlpha(str[end]))
        {
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
    string str = "racecar";
    bool isPalindrome = isValidPalindrom(str);
    isPalindrome ? cout << "\n Yes it is a palindrome \n" : cout << "\n No it is not a palindrome \n";
    // cout << isPalindrome;
    return 0;
}