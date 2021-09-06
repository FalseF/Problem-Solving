#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    stack<ll> st;

    cout<<st.top()<<endl;
//    st.push(100);
//    st.push(400);
//    st.push(500);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
