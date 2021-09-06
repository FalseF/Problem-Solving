#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
ll nod[1000005];
void init(){
    for(int i=1;i<=1000000;i++){
        nod[i]=1;
    }
    for(int i=2;i<=1000000;i++){
        for(int j=i;j<=1000000;j+=i){
            nod[j]++;
        }
    }
}

struct edge{
    int left,right,idx,V;
    edge(int a,int b,int c, int v){
        left=a; right=b; idx=c;V=v;
    }
};
vector<edge> v;
int K;
bool fun(edge a,edge b){
    int b1=a.left/K; int b2=b.left/K;
    if(b1==b2) return a.right<b.right;
    return b1<b2;
}
int sum=0;
unordered_map<int,int> cnt,mrk;
void add(int x){

    cnt[x]++;
    if(cnt[x]==1) {
            mrk[nod[x]]++;
    }

    //cout<<sum<<endl;
}
void del(int x){
     cnt[x]--;
    if(cnt[x]==0) mrk[nod[x]]--;
}
int main()
{
    init();
   // for(int i=1;i<=12;i++) cout<<nod[i]<<" ";
    int t,n,q,x,y,w,k,p,u,cs=0,d;
    scanf("%d",&t);
    while(t--)
    { cs++;
    scanf("%d",&n);
    sum=0;
    cnt.clear();
    v.clear();
    mrk.clear();
    K=sqrt(n);
    int a[n+2];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d %d %d",&x,&y,&u);
        v.pb(edge(x-1,y-1,i,u));
    }
    sort(v.begin(),v.end(),fun);
    int l=0,r=-1;
    int ans[q+3]={0};
    for(auto it:v){
        while(r<it.right){
            r++;

              add(a[r]);
        }
        while(r>it.right){
               del(a[r]);

            r--;
        }
        while(l<it.left){
             del(a[l]);
            l++;
        }
        while(l>it.left){
            l--;
             add(a[l]);
        }
        ans[it.idx]=mrk[it.V];

        //cout<<sum<<endl;
    }
    printf("Case %d:\n",cs);

    for(int i=0;i<q;i++){
        printf("%d\n",ans[i]);
    }
}

    return 0;
}
