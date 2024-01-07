// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {12,12,34,34,56};
//     int n = 5;
//     for(int i = 0;i < n;i++)
//     {
//         int ctr = 0;
//         for(int j = i; j < n;j++)
//         {
//             if(arr[i] == arr[j]) ctr++;

//         }
//         if(ctr == 0) cout<<arr[i]<<" ";
        
//     }
    
// }

#include <iostream>
using namespace std;
int main() {
    int arr[5]={12, 12, 34, 34, 56};
    for(int i=0;i<5;i++)
    {
        int ctr=0;
        for(int j=0;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
            }
        }
        if(ctr==0)
        {
            cout<<arr[i];
            return 0;
        }
    }
// cout<<"No unique value.";
return 0;
}