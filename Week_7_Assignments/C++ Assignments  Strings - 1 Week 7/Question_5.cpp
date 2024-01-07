// Input a string of length less than 10 and convert it into integer without using builtin function.

#include <iostream>
using namespace std;

int stringToInteger(string inputString) {
    int result = 0;
    for (char digit : inputString) {
        result = result * 10 + (digit - '0');
    }
    return result;
}

int main() 
{
    string inputString;
    cout<<"Enter a string: ";
    getline(cin, inputString);
    int outputInteger = stringToInteger(inputString);
    cout << outputInteger << endl;

    return 0;
}






