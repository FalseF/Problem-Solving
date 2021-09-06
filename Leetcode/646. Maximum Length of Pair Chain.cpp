
class Solution {
public:

    int findLongestChain(vector<vector<int>>& pairs) {
         sort(pairs.begin(),pairs.end());
         int N=pairs.size();
         int mcl[N+1];
    for(int i=0;i<=N;i++)
    {
        mcl[i]=1;
    }
    for(int i=1;i<N;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(pairs[i][0]>pairs[j][1] && mcl[i]<mcl[j]+1)
            {
                mcl[i]=mcl[j]+1;
            }
        }
    }
    int mx=0;
    for(int i=0;i<N;i++)
    {
        mx=max(mx,mcl[i]);
    }

        return mx;

    }
};
