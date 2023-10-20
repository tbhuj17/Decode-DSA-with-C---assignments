// Input a string of length n and count all the consonants in the given string.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter string: ";
    getline(cin, s);
    int i = 0, counter = 0;
    while(s[i] != '\0')
    {
        if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U')
            counter++;
        i++;
    } 
    cout<<s.length()-counter;  
}