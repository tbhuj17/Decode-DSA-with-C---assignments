// You have n coins and you want to build a staircase with these coins. The staircase consists of k
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.

#include<iostream>
using namespace std;

int noOfStairs(int lo, int hi, int n)
{
    while(lo <= hi)
    {
        int mid = lo+(hi-lo)/2;//mid
        int m = mid*(mid+1)/2;
        if(m == n) return mid;
        if(m > n) hi = mid-1;
        else
        {
            lo = mid+1;
        }
    }
    return hi;
}
int main()
{
    int n = 13;
    int lo = 1;
    int hi = n;
    cout<< noOfStairs(lo, hi, n);

}