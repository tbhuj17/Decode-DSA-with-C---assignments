// Check whether the given string is palindrome or not.

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    bool flag = 0;
    cout<<"Enter string: ";
    getline(cin,str);
    int front = 0, end = str.length()-1;
    while(front <= end)
    {
        if(str[front] != str[end])
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
        front++;
        end--;
    }
    if(flag == 1)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a palindrome";
    }
}