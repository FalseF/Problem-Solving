///***Bismillahir Rahmanir Rahim***
///***Faizul***CSE**4th batch**BU
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000000
///cin.ignore();
void FastIO()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    cout.precision(20);
}



int main()
{
    FastIO();

    int N;
    cin>>N;
    int A[10000];
    priority_queue<int, vector<int>, greater<int> >PQ;

    for(int i=0;i<N;i++)
    {
        cin>>A[i];
        PQ.push(A[i]);
    }

    while(!PQ.empty())
    {
        int U=PQ.top();
        cout<<U<<endl;
        PQ.pop();
    }


    return 0;
}
