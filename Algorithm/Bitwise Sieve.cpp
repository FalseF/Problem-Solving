#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

vector <int> prime;

int status[MAX/32];

bool check(int N,int pos)
{
    return (bool) (N & (1<<pos));
}

int SET(int N,int pos)
{
    return (N | (1<<pos));
}


void Bitwise_seive()
{
    prime.push_back(2);

    for(int i=3;i<=MAX;i+=2)
    {
        if(check(status[i/32],i%32)==0)
        {
            prime.push_back(i);

            for(int j=i*i;j<=MAX;j+= i*2)
            {
                status[j/32]=SET(status[j/32],j%32);
            }
        }
    }
}

int main()
{
    Bitwise_seive();

    for(int i=0;i<prime.size();i++)
    {
        cout<<prime[i]<<endl;
    }
}
