#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

struct edge{
    int left,right,idx;
    edge(int a,int b,int c){
        left=a; right=b; idx=c;
    }
};
vector<edge> v;
int K;
bool fun(edge a,edge b){
    int b1=a.left/K; int b2=b.left/K;
    if(b1==b2) return a.right<b.right;
    return b1<b2;
}
int a[100005];
int sum=0;
unordered_map<int,int> cnt;
void add(int x){
    cnt[x]++;
    if(cnt[x]==1) sum++;
}
void del(int x){
    cnt[x]--;
    if(cnt[x]==0) sum--;
}
int main()
{
    int t,n,m,x,y,w,k,q,p,cs;
    scanf("%d",&n);
    K=sqrt(n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        v.pb(edge(x-1,y-1,i));
    }
    sort(v.begin(),v.end(),fun);

    int l=0,r=-1;
    int ans[m]={0};
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
        ans[it.idx]=sum;
    }

    for(int i=0;i<m;i++){
        printf("%d\n",ans[i]);
    }

    return 0;
}
