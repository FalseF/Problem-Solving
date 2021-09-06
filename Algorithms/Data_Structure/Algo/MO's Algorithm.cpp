#include<bits/stdc++.h>
using namespace std;
int ans[20005],k,arr[20005],sum=0;
struct edge{
 int Left,Right,Index;
 edge(int a, int b, int c)
 {
     Left=a;
     Right=b;
     Index=c;
 }

};
vector<edge>G;
bool fun(edge a, edge b)
{
    int f=a.Left/k;
    int s=b.Left/k;
    if(f==s) return a.Right<b.Right;
    else return f<s;

}

void add(int i){
    sum+=arr[i];

}

void Remove(int i){
    sum-=arr[i];
}

int main()
{
    int q,i,N,j;
    cin>>N;
    k=sqrt(N);
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
   int L=0,R=-1,l,r;

    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>l>>r;
        G.push_back(edge(l,r,i));
    }

    sort(G.begin(),G.end(),fun);
    for(i=0;i<q;i++)
    {
        while(R<G[i].Right) add(++R);
        while(L<G[i].Left) Remove(L++);
        while(R>G[i].Right) Remove(R--);
        while(L>G[i].Left) add(--L);
        ans[G[i].Index]=sum;
        //cout<<sum<<endl;
    }

    for(i=0;i<q;i++)
    {
        cout<<ans[i]<<" ";
    }
}
