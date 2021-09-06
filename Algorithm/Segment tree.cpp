#include <bits/stdc++.h>
using namespace std;

int A[20000],tree[80000];

void build(int At,int L,int R)
{
    if(L==R)
    {
        tree[At]=A[L];
        return;
    }
    int Left=At*2; int Right=Left+1;
    int Mid=(L+R)/2;

    build(Left,L,Mid);
    build(Right,Mid+1,R);

    tree[At]=tree[Left] + tree[Right];

}

void update(int At,int L,int R,int pos,int U)
{
    if(pos>R || pos<L)
    {
        return ;
    }
    if(L==R && L==pos)
    {
        tree[At]=U;
        return;
    }

    int Left=At*2; int Right=Left+1;

    int Mid=(L+R)/2;

    if(pos<=Mid) update(Left,L,Mid,pos,U);
    else update(Right,Mid+1,R,pos,U);

    tree[At]=tree[Left]+tree[Right];

}

int Query(int node,int b,int e,int i,int j)
{
    if(e<i || b>j) return 0;
    else if(b>=i && e<=j) return tree[node];
    int Left=node*2; int Right=node*2+1;

    int Mid=(b+e)/2;

    int P1=Query(Left,b,Mid,i,j);
    int P2=Query(Right,Mid+1,e,i,j);

    return P1+P2;

}

int main()
{
    int N;

    cin>>N;

    for(int i=1;i<=N;i++) cin>>A[i];

    build(1,1,N);

    int X,Y,C;

    while(1)
    {
        cin>>C;
        if(C==1)
        {
            cin>>X>>Y;
            update(1,1,N,X,Y);
        }
        else if(C==2)
        {
            cin>>X>>Y;
            int ans=Query(1,1,N,X,Y);
            cout<<ans<<endl;
        }
    }
}
