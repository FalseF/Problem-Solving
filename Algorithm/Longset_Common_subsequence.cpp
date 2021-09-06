#include<bits/stdc++.h>
using namespace std;

string S1,S2,ans;



int A[100][1000];

int B[100][1000];

int C[100][1000];
int l1,l2;

void LCS()
{


    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            if(i==0 || j==0) C[i][j]=0;

            if(S1[i-1]==S2[j-1])
            {
                C[i][j]=C[i-1][j-1]+1;

            }
            else
            {
                C[i][j]=max(C[i-1][j],C[j-1][i]);
            }

        }

    }






}
//print lcs string
void Print()
{
    int i=l1;int j=l2;

    while(i>0 && j>0)
    {
        if(S1[i-1]==S2[j-1])
           {
                ans+=S1[i-1];
                i--;j--;
            }
            else if(C[i-1][j]>C[i][j-1]) i--;
            else j--;

    }
    reverse(ans.begin(),ans.end());

    cout<<ans;


}
int main()

{
    cin>>S1>>S2;

    l1=S1.length();

    l2=S2.length();

    LCS();


    //print lcs string ;
    Print();

    return 0;

}
