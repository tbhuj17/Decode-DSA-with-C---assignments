// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cout<<"Enter string: ";
    getline(cin, s);
    int i = 0;
    while(s[i] != '\0')
    {
        if(i % 2 != 0)
        {
            s[i] = '#';
        }
        i++;
    }
    cout<<s;
}