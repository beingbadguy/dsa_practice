#include <iostream>
#include <string>
using namespace std;

void removeAllOccurences(string &str, string part)
{
    int thatIndex = str.find(part);
    while (str.length() > 0 && thatIndex < str.length())
    {
        str.erase(thatIndex, part.length());
        thatIndex = str.find(part);
    }
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
}

int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    removeAllOccurences(str, part);
    cout << str;
    return 0;
}