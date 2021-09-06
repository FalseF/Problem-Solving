//In the name of Allah, the Most Merciful, the Most Merciful./
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define INF 9223372036854775806
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define EPS 1e-9
#define base 313
#define base1 431
#define MOD1 999987337
#define maxm 200005
#define maxn 200005

struct Trie{
  struct node{
    int cnt,endpoint;
    int child[26];
    node(){
      cnt=0; endpoint=0;
      for(int i=0;i<26;i++){
        child[i]=-1;
      }
    }
  } root;
  vector<node> tri;
  int indx;
  Trie(){
    indx=0;
    tri.pb(root);
  }
  void Add(string s,int len){
    int now=0;
    for(int i=0;i<len;i++){
      int id=s[i]-'a';
      if(tri[now].child[id]==-1){
        tri[now].child[id]=++indx;
        node next=node();
        tri.pb(next);
      }
      now=tri[now].child[id];
      tri[now].cnt++;
    }
    tri[now].endpoint++;
  }
  bool Find(string s,int len){
    int now=0;
    for(int i=0;i<len;i++){
      int id=s[i]-'a'; 
      if(tri[now].child[id]==-1){
        return false;
      }
      now=tri[now].child[id];
      if(tri[now].cnt<=0){
        return false;
      }
    }
    return tri[now].endpoint;
  }
  void Delete(string s,int len){
    int now=0;
    for(int i=0;i<len;i++){
      int id=s[i]-'a';
      now=tri[now].child[id];
      tri[now].cnt--;
    }
    tri[now].endpoint--;
  }
};

int main()
{
  Trie t = Trie();
  
  string s;
  
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++){
    cin>>s;
    int len=s.length();
    int ck = t.Find(s,len);
    if(ck) 
    {
    	cout<<"chilo "<<i<<" "<<s<<endl;
    	t.Delete(s,len);
    }
    else t.Add(s,len);
  }
  
    return 0;
}