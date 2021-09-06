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
#define MAX 1e9
///cin.ignore();
void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
ll max(ll a,ll b) {if(a>b) return a; else return b;}
ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll pow(ll B,ll P) { ll S=1; for(ll i=1;i<=P;i++) S=S*B; return S;}
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};

///******************************************************************************///

int A[2000],tree[8000];

void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=A[b];
        return;
    }
    int Left=node*2; int Right=Left+1;

    int Mid=(b+e)/2;

    build(Left,b,Mid);
    build(Right,Mid+1,e);

    tree[node]=min(tree[Left],tree[Right]);
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b) return MAX;
    else if(b>=i && e<=j)
    {
        return tree[node];
    }
    int Left=node*2; int Right=Left+1;

    int Mid=(b+e)/2;

    int P1=query(Left,b,Mid,i,j);
    int P2=query(Right,Mid+1,e,i,j);

    return min(P1,P2);
}

int main()
{
    FastIO();

    int N;

    cin>>N;

    for(int i=1;i<=N;i++) cin>>A[i];

    build(1,1,N);

    int X,Y;

    while(cin>>X>>Y)
    {
        int ans=query(1,1,N,X,Y);
        cout<<ans<<endl;
    }

    return 0;
}
