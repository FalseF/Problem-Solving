#include<bits/stdc++.h>
using namespace std;

#define Max 100005
int ST[24][Max];
int A[Max];
void Compute_ST(int N)
{
    for (int i=0;i<N;i++) ST[0][i] = A[i];
    for (int k = 1;(1 << k)<N; k++)
    {
        for (int i=0;i+(1<<k)<=N;i++)
        {
            int x = ST[k-1][i];
            int y = ST[k-1][i+(1<<k-1)];
            ST[k][i]=x+y;
        }
    }
}
 
int RMQ(int i, int j)
{
	int sum = 0;
	while(1)
	{
		int k = log2(j-i);
		if(k==0 || i==j)
		{
			if(i!=j)
			{
				sum+=A[i];
				sum+=A[j];
			}
			else sum+=A[j];
			break;
		}
		
		sum+=ST[k][i];
		i = i + pow(2,k);
		if(i>j) break;
	}
	
	return sum;
}
 
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    Compute_ST(N);
    int Q;
    cin>>Q;
    while(Q--)
    {
        int x,y;
        cin>>x>>y;
        // Row 0 based and colum 0 based index;
        x--;
        y--;
        cout<<RMQ(x,y)<<endl;
    }
    return 0;
}
