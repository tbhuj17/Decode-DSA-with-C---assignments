// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result;
    cout << "Armstrong numbers between 1 and 500 are: " << endl;

    for (int i = 1; i <= 500; ++i) {
        num = i;
        result = 0;

        while (num != 0) {
            remainder = num % 10;
            result += pow(remainder, 3);
            num /= 10;
        }

        if (result == i)
            cout << i << " ";
    }

    return 0;
}

