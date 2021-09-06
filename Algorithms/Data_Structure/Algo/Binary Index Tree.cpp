#include<bits/stdc++.h>
using namespace std;
int BIT[1000], a[1000], n;
struct FT{
    int n;
    FT(int _n){
        n = _n;
    }
    void update(int x, int delta){
          for(; x <= n; x += x&-x) BIT[x] += delta;
    }
    int query(int x, int sum = 0){
         for(; x > 0; x -= x&-x) sum += BIT[x];
         return sum;
    }
};
int main(){
    int n;
    cin >> n;
    FT ft(n);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        ft.update(i, a[i]);
    }
    for (int i = 1; i <= n; i++){
        //cin >> a[i];
        ft.update(i, a[i]);
    }
    int c, d;
    while(cin >> c){
        cin >> d;
        int a = ft.query(c - 1);
        int b = ft.query(d);
        cout << b - a << endl;
    }
}
