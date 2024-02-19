// Valid Parentheses
#include<iostream>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i=0;i<s.length();i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false; 
                }
                char top = st.top();
                if ((s[i] == ')' && top == '(') || (s[i] == ']' && top == '[') || (s[i] == '}' && top == '{')) {
                    st.pop();
                } else {
                    return false; 
                }
            }
        }

        return st.empty(); 
    }
};


int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    Solution S;
    cout<<S.isValid(s);

}