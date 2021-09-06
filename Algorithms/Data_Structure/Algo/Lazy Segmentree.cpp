
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000000
#define pb push_back
#define mp make_pair
struct edge
{
    int value;
    int lazy;
};

edge tree[20000];
int A[200000];

void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].value=A[b];
        return;
    }

    int Left=node*2; int Right=Left+1;

    int Mid=(b+e)/2;

    build(Left,b,Mid);
    build(Right,Mid+1,e);

    tree[node].value=tree[Left].value+tree[Right].value;

}

void update(int node,int b,int e,int i,int j,int V)
{
    if(i>e || j<b) return;

    if(b>=i && e<=j)
    {
        tree[node].value+=(e-b+1)*V;// leef node gulor value add korlam
        tree[node].lazy+=V;// leef node koto dara update hobe ta save kora rakhlam 
        return;
    }

    int Left=node*2; int Right=Left+1;

    int Mid=(b+e)/2;

    update(Left,b,Mid,i,j,V);
    update(Right,Mid+1,e,i,j,V);

    tree[node].value=tree[Left].value+tree[Right].value + (e-b+1)*tree[node].lazy;
    // left ar right node koto value chilo plus oi node e koto lazy chilo se gulo add korlam

}

int query(int node,int b,int e,int i,int j,int carry)
{
    if(i>e || j<b) return 0;

    if(b>=i && e<=j)
    {
        return tree[node].value+carry*(e-b+1);
    }

    int Left=node*2; int Right=Left+1;
    int Mid=(b+e)/2;

    int P1=query(Left,b,Mid,i,j,carry+tree[node].lazy);
    int P2=query(Right,Mid+1,e,i,j,carry+tree[node].lazy);

    return P1+P2;

}

int main()
{
    int N;

    cin>>N;

    for(int i=1;i<=N;i++) cin>>A[i];

    build(1,1,N);

    update(1,1,N,1,4,1);

    for(int i=1;i<=N*2;i++) cout<<tree[i].value<<" "; cout<<endl;

    cout<<query(1,1,N,1,2,0)<<endl;

    return 0;
}
