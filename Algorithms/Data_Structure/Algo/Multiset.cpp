#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,u,v;
    cin>>N;
    multiset<int>st;
    for(int i=1;i<=N;i++)
    {
        cin>>u;
        st.insert(u);

    }
    auto it=*(st.rbegin());//set er last element neoya
    cout<<it<<endl;
    st.erase(--st.end()); // set er last element remove kora
    auto it1=st.find(6);// set er vitor num ache ki na search kora
    if(it1==st.end()) {
        cout<<"No number Found"<<endl;
    }
    st.erase(it1); // je kono element remove kora
}
