#include <bits/stdc++.h>
using namespace std;

int digit(int N)
{
    if(N<0) return 0;
    else if(N<=1) return 1;

    double D=0;
    for(int i=2;i<=N;i++)
    {
        D+=log10(i);
    }

    return floor(D) + 1;

}

int main()
{
    int N;
    cin>>N;
    cout<<digit(N)<<endl;

    return 0;
}
