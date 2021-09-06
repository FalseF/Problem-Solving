#include<bits/stdc++.h>
using namespace std;

#define MAX                 1000000

bool p[MAX+2];
vector<int> prime;
#define pb push_back

void sieve()
{
    p[0]=p[1]=1;
    int root=sqrt(MAX);
    for(int i=2; i<=root; i++)
    {
        if(p[i]==0)
        {
            prime.pb(i);
            for(int j=i*i; j<=MAX; j+=i)
            {
                p[j]=1;
                if(i%2!=0) j+=i;
            }
        }
    }
}

void gold(int n) //prints the lexicographically smallest odd pair for any even number greater than 4.
{
    int c=0;
    for(int i=1; prime[i]<=n/2; i++)
    {
        int a=n-prime[i];

        if(p[a]==0)
        {
            //printf("%d+%d\n",prime[i],a);
            //break;
            c++;

        }
    }

    cout<<c<<endl;
}

int main()
{
    //CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    sieve();
    int n;
    while(scanf("%d",&n)==1 && n!=0)
    {
        printf("%d =",n);
        if(n<4 || n%2==1)
        {
            printf("Invalid input\n");
            continue;
        }

        gold(n);
    }
    return 0;
}
