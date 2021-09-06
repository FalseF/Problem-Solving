///***Bismillahir Rahmanir Rahim***
///***Md Faizul Haque***///
///***University of Barisal***///

#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <sstream>
#include<fstream>
#include <iostream>
#include <string>
#include <memory.h>
#include <set>
#include <time.h>
#include <assert.h>
#include <stack>
#include <sstream>
#include <algorithm>

using namespace std;
typedef long long ll;
#define INF 100000000000000000
#define pb push_back
#define mp make_pair
///cin.ignore();
void FastIO() {ios_base:: sync_with_stdio(false); cin.tie(0); cout.precision(20);}
ll max(ll a,ll b) {if(a>b) return a; else return b;}
ll min(ll a,ll b) {if(a<b) return a; else return b;}
ll pow(ll B,ll P) { ll S=1; for(ll i=1;i<=P;i++) S=S*B; return S;}
int fx4[]={1,-1,0,0}; int fy4[]={0,0,1,-1};

///******************************************************************************///


int main()
{
    FastIO();

    int A[1000],L[1000]={0};

    int N;

    cin>>N;

    for(int i=1;i<=N;i++) cin>>A[i];

    int LIS=1;

    for(int i=1;i<=N;i++)
    {
        for(int j=i+1;j<=N;j++)
        {
            if(A[j]>A[i])
            {
                if(L[j]<L[i]+1)
                {
                    L[j]=L[i]+1;
                    LIS=max(LIS,L[j]+1);
                }
            }
        }
    }

    LIS--;

    vector <int> ans;

    for(int i=N;i>=1;i--)
    {
        if(L[i]==LIS)
        {
            ans.pb(A[i]);
            LIS--;
        }
    }

    reverse(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";

    return 0;
}
