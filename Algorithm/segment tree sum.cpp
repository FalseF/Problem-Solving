///***Bismillahir Rahmanir Rahim***
///***Md Faizul Haque***///
///***University of Barisal***///

#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <sstream>
#include<fstream>
#include <iostream>
#include <string>
#include <memory.h>
#include <set>
#include <time.h>
#include <assert.h>
#include <stack>
#include <sstream>
#include <algorithm>

using namespace std;
typedef long long ll;
#define INF 100000000000000000
#define pb push_back
#define mp make_pair
///cin.ignore();
void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
ll max(ll a,ll b) {if(a>b) return a; else return b;}
ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll pow(ll B,ll P) { ll S=1; for(ll i=1;i<=P;i++) S=S*B; return S;}
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};

///******************************************************************************///

int A[200],tree[800];

void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=A[b];
        return;
    }

    int left=node*2; int right=node*2+1;

    int mid=(b+e)/2;

    build(left,b,mid);
    build(right,mid+1,e);

    tree[node]=tree[left]+tree[right];

}

int Query(int node,int b,int e,int i,int j)
{
    if(e<i || b>j) return 0;
    else if(b>=i && e<=j) return tree[node];

    int mid=(b+e)/2;

    int left=node*2; int right=left+1;

     int P1=Query(left,b,mid,i,j);
     int P2=Query(right,mid+1,e,i,j);

     return P1+P2;
}

void update(int node,int b,int e,int i,int value)
{
    if(i<b || i>e) return;

    else if(i==b && b==e)
    {
        tree[node]=value;
        return;
    }

    int left=node*2; int right=left+1;

    int mid=(b+e)/2;

    if(i<=mid) update(left,b,mid,i,value);
    else update(right,mid+1,e,i,value);

    tree[node]=tree[right] + tree[left];

}


int main()
{
    FastIO();

    int N;

    cin>>N;

    for(int i=1;i<=N;i++) cin>>A[i];

    build(1,1,N);

    for(int i=1;i<=N*2+1;i++) cout<<tree[i]<<" "; cout<<endl;

    while(1)
    {
        string C; int X,Y;
        cin>>C;
        if(C=="update")
        {
            cin>>X>>Y;
            update(1,1,N,X,Y);
        }
        else if(C=="query")
        {
            cin>>X>>Y;
            int ans=Query(1,1,N,X,Y);
            cout<<ans<<endl;
        }
    }

    return 0;
}

