#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,vector<string> >G;
map<string,string>  ans;
map<string,ll> visited;

ll BFS(string s,string d)
{
    //memset(visited,0,sizeof(visited));
    visited[s]=1;
    queue<string> Q;
    Q.push(s);
    while(!Q.empty())
    {
        string S=Q.front();
        Q.pop();
        for(ll i=0;i<G[S].size();i++)
        {
            string S1=G[S][i];
            if(visited[S1]==0)
            {
                visited[S1]=1;
                ans[S1]=S;
                Q.push(S1);
                if(visited[d]==1) return 0;
            }

        }
        if(visited[d]==1) return 0;
    }

    return 1;

}
void print(string s1,string s2)
{
    if(s1==s2) return;
    print(ans[s1],s2);
    cout<<ans[s1]<<" "<<s1<<endl;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll N,E,u,v,i,j,ck=0;
    string s1,s2;
    while(cin>>N){
            for(i=0;i<N;i++)
            {
                cin>>s1>>s2;
                G[s1].push_back(s2);
                G[s2].push_back(s1);
                visited[s1]=0;
                visited[s2]=0;

            }
            cin>>s1>>s2;

            if(ck>0) {cout<<endl;};ck++;
            ll X=BFS(s1,s2);
            if(X==1){cout<<"No route"<<endl;}
            else {
             print(s2,s1);
            }
            G.clear();
            ans.clear();
            visited.clear();
    }


}
