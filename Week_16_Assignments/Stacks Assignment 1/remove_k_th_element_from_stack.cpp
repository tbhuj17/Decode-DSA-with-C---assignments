#include<iostream>
#include<stack>

using namespace std;

void display(stack <int> &s)
{
    if(s.size() == 0) return;

    int x = s.top();
    s.pop();
    display(s);
    cout<<x<<" ";
    s.push(x);
    
}
int main()
{
    stack <int> st;
    stack <int> temp;
    int n;
    cout<<"Enter n: ";
    cin>>n;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    display(st);
    cout<<endl;
    for(int i = 0;i < n-1;i++)
    {
        temp.push(st.top());
        st.pop();
    }

    st.pop();

    while(temp.size()>0)
    {
        st.push(temp.top());
        temp.pop();
    }

    display(st);
}