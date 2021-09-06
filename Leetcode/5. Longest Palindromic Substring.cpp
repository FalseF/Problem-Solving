class Solution {
public:
typedef long long ll;
const int mod1 = 1000058831, base1 = 131;
const int mod2 = 1e9+7, base2 = 89;
const int mxn = 1e6 + 3 ;
int powr1[10000], powr2[10000];
int h1[10000],h2[10000];
int r_h1[10000],r_h2[10000];
void computepower()
{
	powr1[0]=1;
	powr2[0]=1;
	for(int i = 1;i<1009;i++)
	{
		powr1[i] = ( 1LL * powr1[i-1] * base1) % mod1;
		
		powr2[i] = ( 1LL * powr2[i-1] * base2 ) % mod2;
	}
	
}

void Rollinghash (string str)
{
h1[0]=0;
h2[0]=0;
r_h1[0]=0;
r_h2[0]=0;
int len1=str.length()-1;
int len2=len1;
	for(int i=1;i<=str.length();i++)
	{
			
	 h1[i]=( 1LL * h1[i-1] * base1 + str[i-1]) % mod1;
	 h2[i]=( 1LL * h2[i-1] * base2 + str[i-1]) % mod2;
	
	 r_h1[i] = ( 1LL * r_h1[i-1] * base1 + str[len1--]) % mod1;
	 r_h2[i] = ( 1LL* r_h2[i-1] * base2 + str[len2--]) % mod2;
	}
}

int cal_hash1(int l , int r )
{
	if(l>r) return 0;
	 else return (h1[r] - ( 1LL * h1[l - 1] * powr1[r - l + 1]) % mod1 + mod1 ) % mod1;
}


int cal_r_hash1(int l , int r )
{
	if(l>r) return 0;
	 else return (r_h1[r] - ( 1LL * r_h1[l - 1] * powr1[r - l + 1]) % mod1 + mod1 ) % mod1;
}

 
    
    
    string longestPalindrome(string S) {
        
        computepower();
	
		Rollinghash(S);
		int len=S.length();
		int pal=len;
        int l=0,r=0,mx=0;
         string res="";
		for(int i=1;i<=len;i++)
		{
			for(int j=1;(j+i)<=len;j++)
			{
				int h1=cal_hash1(j,j+i);
				int lo=len-(j+i)+1;
                int up=len-j+1;
				int h2=cal_r_hash1(lo,up);
				if(h1==h2)
				{
					//cout<<j<<" "<<j+i<<endl;
					if(i>mx)
					{
						mx=i;
						l=j-1;
						r=i+j-1;
					}
				}
			}
		}
		
		for(int i =l;i<=r;i++)
		{
			res+=S[i];
		}
        
        return res;
        
    }
};