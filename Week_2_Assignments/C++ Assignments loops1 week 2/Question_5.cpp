
// Display this GP - 3,12,48,.. upto ‘n’ terms.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a = 3;
    int r = 4;
    int n;
    cout<<"Enter value for n: ";
    cin>>n;

    for (int i = 1; i <= n; i++) {
        int a_n = a * pow(r, i - 1);
        cout << a_n << " ";
    }

    return 0;
}
