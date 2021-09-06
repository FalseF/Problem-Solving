class Solution {
public:
    int l1,l2;
    string S1,S2;
    int dp[1003][1003];
    int fun(int m, int n)
{
    if(m==0) return n;
    if(n==0) return m;
     if(dp[m-1][n-1]!=-1) return dp[m-1][n-1];
    if(S1[m-1]==S2[n-1]) return dp[m-1][n-1]=fun(m-1,n-1);
    else{

        int v1=fun(m,n-1);
       int v2=fun(m-1,n);
        int v3=fun(m-1,n-1);
        return dp[m-1][n-1]=1+min(v1,min(v2,v3));
    }
}
    int minDistance(string word1, string word2) {
        memset(dp,-1,sizeof(dp));
        S1=word1;
        S2=word2;
        l1=S1.length();
     l2=S2.length();
    int edit_D=fun(l1,l2);
    return edit_D;


    }
};
