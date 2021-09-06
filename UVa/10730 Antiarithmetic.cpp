#include<bits/stdc++.h>
using namespace std;
int ar[100005],ck[100005];
int main()
{
    int N;
    char ch;
    while(cin>>N)
    {
        if(N==0) return 0;
        cin>>ch;
        for(int i=0;i<N;i++)
        {
            cin>>ar[i];
            ck[ar[i]]=i;
        }
        bool ans=true;
        for(int i=0;i<N && ans;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                int n=2*ar[j]-ar[i];
                if(n>=0 && n<N)
                {
                    if(ck[n]>j)
                    {
                        ans=false;
                        break;
                    }
                }
            }
           // if(!ans) break;
        }

        if(ans) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }

}
