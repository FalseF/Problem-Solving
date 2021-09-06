/*########  IN THE NAME OF AintAH   ##########*/

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter" 
#include<bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#define ull unsigned long long
const int MOD = 1000000007;
const int mxn = 100005;
#define MAX 100001
vector<int> Primes;
int least[MAX];
void linearsieve(){
    for(int i=2;i<MAX;i++){
        if(!least[i]){
            least[i]=i;
            Primes.push_back(i);
        }
        for(int x:Primes){
            if(x>least[i] | i*x>=MAX) break;
            least[i*x]=x;
        }
    }
}

ull hashval[mxn];

void pre(){
	hashval[0]=0;
	hashval[1]=0;
	for(int n=2;n<mxn;n++){
		int m=n;
		ull cur=0;
		for(int i=0;i<Primes.size() && Primes[i]*Primes[i]<=m;i++){
			if(m%Primes[i]) continue;
			while(m%Primes[i]==0){
				cur=(cur^(1<<Primes[i]));
				m/=Primes[i];
			}
		}
		if(m!=1){
			cur=(cur^(1LL<<n));
		}
		hashval[n]=cur;
	}
}
int main()
{
	
	linearsieve();
	pre();
	
   int N,Q;
   scanf("%d%d",&N,&Q);
   int ar[N+5];
   int zero[N+3]={0},minus[N+3]={0};
   ull h1[mxn+3];
   h1[0]=0;
   for(int i=1;i<=N;i++)
   {
	   	 scanf("%d",&ar[i]);
	   	 zero[i]=zero[i-1]+(ar[i]==0);
		
		if(ar[i]<0){
			minus[i]=minus[i-1]+1;
			ar[i]=abs(ar[i]);
		}
		else{
			minus[i]=minus[i-1];
		}
	   	  h1[i]=( h1[i-1] ^ hashval[ar[i]] ) ;
   }
   
   while(Q--)
   {
   	  int l,r;
   	  cin>>l>>r;
   	 if(zero[r]-zero[l-1]){
			printf("Yes\n");
			continue;
		}
		
		ull cur=(h1[r]^h1[l-1]);
		int cnt=minus[r]-minus[l-1];
		
		//cout<<cur<<" "<<cnt<<endl;
		
		if(cur) printf("No\n");
		else{
			if(cnt%2) printf("No\n");
			else printf("Yes\n");
		}
   	  
   }
   

   /************ALEYA YOUSUF ************/
 
 
 /************AintAH IS ALMIGHTY ************/
return 0;
 
}