#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

int p_square(int N)
{
    int S=sqrt(N);
    if(S*S == N)
        return 1;
    else
        return 0;
}

int digitadd(int N)
{
    int sum=0;
    while(N!=0)
    {
        sum+=N%10;
        N=N/10;
    }
    return sum;
}

int main()
{
    int number;
    //printf("\n\n\n\n\n\t\t\t\tEnter a number  ");
    //cin>>number;
    int test=1;
    int number2;
    while(number2=rand()){

    int number3=number2%10000;

    //cout<<number2<<endl;

    int sum=digitadd(number3);

    if(sum==3 || sum==7)
    {
        cout<<"Attempt "<<test<<" You are Lucky and Winner"<<endl<<endl;
        break;
    }
    else if(sum==13 || sum==20)
        cout<<"Attempt "<<test<<" You are Unlucky and Looser"<<endl<<endl;

    else
        cout<<"Attempt "<<test<< " Normal Number"<<endl<<endl;
    test++;
    }

    return 0;

}
