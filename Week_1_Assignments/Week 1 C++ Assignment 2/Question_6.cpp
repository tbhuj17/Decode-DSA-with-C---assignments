// Ques: Find the output.
#include<iostream>
using namespace std;
int main()
{
    int i =  ( 4 + 7 / 5 * 6 * 6+9  )% 100  ;
    cout<<i;
}

// Ans- Since, parenthesis has the highest precedence, thus the equation in it is executed first.
// => (4 + 1 * 6 * 6 + 9)%100
// => (4 + 6 * 6 + 9)%100
// => (4 + 36 + 9)%100
// => (49)%100
// => 49. By using property if a < b, then a%b = a.
// Thus, final answer is 49.