#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<string,vector<string> >G;
map<int, string>S;
map<string,int>level;
map<string,int>visited;
ll bfs(string s, string d)
{
    visited[s]=1;
    level[d]=0;
    queue<string>Q;
    Q.push(s);
    while(!Q.empty())
    {
        string u1=Q.front();
        Q.pop();
        for(ll i=0;i<G[u1].size();i++)
        {
            string V1=G[u1][i];
            if(visited[V1]==0)
            {
                visited[V1]=1;
                level[V1]=level[u1]+1;
                Q.push(V1);
                if(visited[d]==1) return level[d];
            }
        }
    }
    return 0;
}

int main()
{
    //freopen("input.txt","r",stdin);
    ll i,j,k,N,c=0;
    string s;
    cin>>N;
    for(i=1;i<=N;i++)
    {
        while(cin>>s)
        {
         S[c]=s;
         c++;
         if(s=="*") break;
        }
        for(j=0;j<c;j++)
        {
            string S1=S[j];
            ll L=S1.length();
            for(k=0;k<c;k++)
            {
                ll L1=S[k].length();
                string S2=S[k];
                if(L1!=L) continue;
              ll C=0;
                for(ll m=0;m<L;m++)
                {
                    if(S1[m]!=S2[m]) C++;if(C>1) break;

                }
                if(C<2) {G[S1].push_back(S2);G[S1].push_back(S2);}
            }
        }
        string source,dis,line;
        cin.ignore();
        while(getline(cin,line))
        {
            if(line=="" "") break;
            for(ll M=0;M<line.length();M++)
            {
                if(line[M]==' '){
                    source=line.substr(0,M);
                    dis=line.substr(M+1,line.length());
                    break;}
            }
           // cout<<source<<" "<<dis<<endl;
           ll R=bfs(source,dis);

        cout<<source<<" "<<dis<<" ";
        cout<<R<<endl;

        level.clear();
        visited.clear();

        }
        G.clear();
        level.clear();
        visited.clear();
        if(i%2==1) cout<<endl;
    }

}
