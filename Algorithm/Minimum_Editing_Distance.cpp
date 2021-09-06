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
            if(i==0 && j==0) C[i][j]=0;

            else if(i==0) C[i][j]=C[i][j-1]+1;

            else if(j==0) C[i][j]=C[j][i-1]+1;



            if(S1[i-1]==S2[j-1])
            {
                C[i][j]=C[i-1][j-1];

            }
            else
            {
                C[i][j]=1+min(min(C[i-1][j-1],C[i][j-1]),C[i-1][j]);

            }

        }

    }






}

//void Print()
//{
//    int i=l1;int j=l2;
//
//    while(i>0 && j>0)
//    {
//        if(S1[i-1]==S2[j-1])
//           {
//                ans+=S1[i-1];
//                i--;j--;
//            }
//            else if(C[i-1][j]>C[i][j-1]) i--;
//            else j--;
//
//    }
//    reverse(ans.begin(),ans.end());
//
//    cout<<ans;


//}
int main()

{
    cin>>S1>>S2;

    l1=S1.length();

    l2=S2.length();

    LCS();

    cout<<C[l1][l2];

    //Print();

    return 0;

}

