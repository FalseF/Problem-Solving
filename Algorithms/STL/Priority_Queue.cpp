#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    priority_queue<ll>PQ;
    PQ.push(100);
    PQ.push(400);
    PQ.push(500);
    while(!PQ.empty())
    {
        cout<<PQ.top()<<endl;
        PQ.pop();
    }
}
