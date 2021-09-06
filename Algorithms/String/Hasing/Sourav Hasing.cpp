#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wsign-compare" 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
const int mod = 1000058831, base = 193;
 
vector<int> power(1000008);
char pattern[1000006], text[1000005];
 
void computePower(){
    
   power[0] = 1;
    for(int i = 1; i <= 1000006; i++){
        power[i] = (1LL * power[i - 1] * base) % mod;
    }
}
 
struct RollingHash{
    
    int n, m, mxPow;
    vector<int> textPrefix, patternPrefix;
    
    void init(int _n, int _m){
        n = _n;
        m = _m;
        textPrefix.clear();
        textPrefix.resize(n + 3); // n + 3 taken, not n. so compute carefully.
        patternPrefix.clear();
        patternPrefix.resize(n + 3);
        mxPow = max(n, m);
    }
    
    ///computes single hasval for a string
    int compute_hash (string s){
        int Size = s.size();
        int pr;
        pr = 0;
        for(int i = 0; i < Size; i++){
            pr = ( pr + 1LL * s[i] * power[i]) % mod;
        }
        return pr;
    }
    
    //prefix er hash ber kore rakhe, pore seita diya O(1) a kono range
    // er hashval calc kora jai.
    void rolling_hash(string s, bool flag){
        if (flag){
            textPrefix[0] = 0;
            for(int i = 0; i < (int)s.size(); i++){
                textPrefix[i+1] = (textPrefix[i] + 1LL * s[i] * power[i]) % mod;
                //1LL diye gun korar somoi bracket deya jabe na..
                //cout << textPrefix[i + 1] << endl;
            }
        }
        else {
            patternPrefix[0] = 0;
            for(int i = 0; i < (int)s.size(); i++){
                patternPrefix[i+1] = (patternPrefix[i] + 1LL * s[i] * power[i]) % mod;
            }
        }
    }
    
    int calc_hashval(int pos, int len, int maxPow, bool flag){
        //pos is 0 based index always remember that;
        // else use pos - 1; other things are 1 based
        // prefix array 1 based ar pos asche 0 based
        int hash;
        if(flag){
            hash = textPrefix[pos+len] - textPrefix[pos]; 
            if(hash < 0)hash += mod;
            if(maxPow != 0){
                hash = (1LL * hash * power[maxPow-(pos+len)]) % mod;
            }
        }
        else { 
            hash = patternPrefix[pos+len] - patternPrefix[pos]; 
            if(hash < 0)hash += mod;
            if(maxPow != 0){
                hash = (1LL * hash * power[maxPow-(pos+len)]) % mod;
            }
        }
        return hash;
    }
    void solve (char t[], char p[]){
        string pattern = p, text = t;
        int a = compute_hash(pattern);
        rolling_hash(text, true);
        cout << textPrefix[5] << endl;
        cout << calc_hashval(0,1,mxPow, true) << endl;
    }
};
 
int main(){
    computePower();
    int testCase;
    scanf("%d", &testCase);
    for (int cs = 1; cs <= testCase; cs++){
        int n, m;
        scanf("%d %d", &n, &m);
        scanf("%s %s", text, pattern);
        RollingHash rh;
        rh.init(n, m);
        rh.solve(text, pattern);
    }
    
    return 0;
}