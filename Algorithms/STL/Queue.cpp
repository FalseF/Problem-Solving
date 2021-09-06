#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    queue<ll> st;
    st.push(100);
    st.push(400);
    st.push(500);
    while(!st.empty())
    {
        cout<<st.front()<<endl;
        st.pop();
    }
}

