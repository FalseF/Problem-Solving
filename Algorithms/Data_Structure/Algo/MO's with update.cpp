#include<bits/stdc++.h>
using namespace std;
#define MAX 200006
#define ll long long
int l, r, t, blocksize;
struct query{
    int l, r, t, id;
    bool operator <(query other) const{
        int l1, r1, l2, r2;
        l1 = l / blocksize, l2 = other.l / blocksize,
        r1 = r / blocksize, r2 = other.r / blocksize;
        if(l1 != l2) return l1 < l2;  
        if(r1 != r2) return r1 < r2;
        //return l1 % 2? r > other.r : r < other.r;
        return t < other.t;
        // return l1 % 2 ? t > other.t: t < other.t;
    }
    
} Q[MAX];

struct update{
    int x, pre, now;
} U[MAX];

struct MO_UP{
     vector<int> input, Copy;
     vector<int> last, ans; 
     int n, q, distinct;  
     
     MO_UP(int _n, int _q){
         l = 0, r = -1, t = 0;
         n = _n; q = _q; 
         distinct = 0; blocksize = (int)pow(n, 2.0/ 3.0);
         input.clear(); Copy.clear(); ans.clear();
         last.clear(); last.resize(n);
     }
    
    void mo_up(){
        
        for(int i = 0; i < q; i++) {
            
            while(t < Q[i].t) {
                t++, apply(U[t].x, U[t].now);
            } // Forward Update
            
            while(t > Q[i].t) {
                apply(U[t].x, U[t].pre), t--;
            } // Reverse Update
            
            while(l > Q[i].l) {
                add(--l);
            }
            
            while(r < Q[i].r) {
                add(++r);
            }
            
            while(l < Q[i].l) {
                remove(l); l++;
            }
            
            while(r > Q[i].r) {
                remove(r); r--;
            }
            ans[Q[i].id] = distinct;
        }
    }
    
    void apply(int x, int y) {
        if(l <= x && x <= r) {  // l, r is the l, r from MO's algo
           remove(x);
           input[x] = y;
           add(x);
        } else input[x] = y;
    }
    void add(int x){
        a = input[x];
        occ[a]++;
        sum += (1LL * a * (angry[occ[a]]));
        //cout << sum << endl;
    }
    void remove(int x){
        a = input[x];
        sum -= (1LL * a * (angry[occ[a]]));
        //cout << sum <<" b"<< endl;
        occ[a]--;
    }
    void Resize(){
        Copy = input;
        sort(Copy.begin(), Copy.end());
        Copy.resize(unique(Copy.begin(), Copy.end())- Copy.begin());
        for(int i = 0; i < n; i++){
            int idx = lower_bound(Copy.begin(), Copy.end(), input[i]) - Copy.begin();
            input[i] = idx;
        }
    }
    void solve(){
        for (int i = 0; i < n; i++){
            scanf("%d", &input[i]);
            last[i] = input[i];
        } 
        scanf("%d", &q);
        int type, left, right, x, time = 0, idx = 0, y;
        for (int i = 0; i < q; i++){
            scanf("%d", &type);
            if (type == 1){
                scanf("%d %d", &left, &right); 
                left --; right --; // 0 based
                idx++;
                Q[idx - 1].l = left; Q[idx - 1].r = right;
                Q[idx - 1].t = time; Q[idx - 1].id = idx - 1;
            }
            else {
                time++;
                scanf("%d %d", &x, &y); x--; //0 based
                U[time].x = x; U[time].pre  = last[x]; U[time].now = y;
                last[x] = y;
            }
        }
        q = idx; ans.resize(q);
        mo_up();
    }

};

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    MO_UP mos(n, m);
    mos.solve();
    
    return 0;
}