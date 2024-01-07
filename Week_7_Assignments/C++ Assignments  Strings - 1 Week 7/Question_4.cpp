// Input a string of even length and reverse the second half of the string.

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int n = str.length();
    if(n % 2 != 0) cout<<"Invalid length.";
    else
    {
        reverse(str.begin() + n/2, str.end());
        cout<<str;
    }
}
    