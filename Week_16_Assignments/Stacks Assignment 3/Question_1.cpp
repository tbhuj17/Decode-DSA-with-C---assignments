#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        stack<int> st;
        for(int i=0; i<n; i++){
            if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                int temp = st.top();
                temp *= 2;
                st.push(temp);
            }
            else if(operations[i] == "+"){
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                int temp3 = temp1 + temp2;
                st.push(temp1);
                st.push(temp3);
            }
            else{
                int val = stoi(operations[i]);
                st.push(val);
            }
        }

        int sum = 0;
        while(!st.empty()){
            int temp = st.top();
            sum += temp;
            st.pop();
        }

        return sum;
    }
};

int main()
{
    vector<string> operations = {"5","2","C","D","+"};
    Solution s;
    cout<<s.calPoints(operations);
}