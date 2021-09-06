
      /*########  IN THE NAME OF ALLAH   ##########*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[100][100];
string S;
ll fun(ll i, ll j)
{
    if(i>j) return 0;
    if(i==j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(S[i]==S[j])
    {
        return dp[i][j]=1+fun(i+1,j)+fun(i,j-1);//same char ache biday 2 pas theke delet dile same palindrome thak te o pare ei jonno 2bar e jog korche
    }
    else {
        return dp[i][j]=fun(i+1,j)+fun(i,j-1)-fun(i+1,j-1);
        //2tar plush  theke minus korchi karon 2pash theke delet deoyar pore same plain drome thakte pare mani ek e plaindrome 2bar jog korche ei jonno ek bare
        // 2 pash theke delet kore 2bar jog kora theke ekta minus korchi
    }
}
int main()
{
   ll T,N,E,u,Q,v,i,j,k,sum=0,ck=0,x,y,cs=0;

   double d1,d2,d3;
   scanf("%lld",&T);
   while(T--)
   {
       cin>>S;
              memset(dp,-1,sizeof(dp));
           ll l=S.length()-1;
           ll ans=fun(0,l);
       cs++;
       cout<<"Case "<<cs<<": "<<ans<<endl;
       S.clear();
   }
 /************ALEYA YOUSUF ************/

 /************ALLAH IS ALMIGHTY ************/
return 0;

}
