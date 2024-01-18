// A function countAndSay is defined as:
// countAndSay(1) = “1”
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then
// converted into a different digit string.

#include<iostream>
#include<string>
#include<vector>

using namespace std;

string count_and_say_n(int n)
{
    if(n == 1)return "1";
    string str = count_and_say_n(n-1);
    string ztr = "";    //final ans
    int freq = 1;
    char ch = str[0];

    for(int i = 1; i < str.length(); i++)
    {
        int dh = str[i];
        if(ch == dh) freq++;
        else
        {
            ztr+= to_string(freq)+ch;
            freq = 1;
            ch = dh;
        }
    }
    ztr+= to_string(freq)+ch;
    return ztr;
}
int main()
{
    string str;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    str = count_and_say_n(n);
    int i = 0;
    while(str[i] != '\0')
    {
        cout<<str[i];
        i++;
    }
    cout<<endl;
        
}