
#include<bits/stdc++.h>

using namespace std;
int parent[20010],Rank[20010];
void initialize()
{
    for(int i=0;i<20010;i++) {parent[i]=i;Rank[i]=1;}
}
int find(int r)
{
    if(parent[r]==r) return r;

    parent[r]=find(parent[r]);

    return parent[r];
}
int component,ans=0;
void joint(int x, int y)
{
    int u=find(x);

    int v=find(y);

    if(u!=v) {//cout<<"The are different Component so that the include in the same component";

              component--;//first a sob gula alada component e chilo ar ekhon ekoi component e ene dichi tai comonent num ek ek kore komachi

            if(Rank[v]>Rank[u]){Rank[v]+=Rank[u];parent[u]=v;} //zetar child beshi setar sathe new child add korchi abong mot child num add korchi

            else {Rank[u]+=Rank[v];parent[v]=u;}

    }
    else {// cout<<"The are same component";


    }
}
#define WRITE(f) freopen(f,"w",stdout)
int N;
int enemyID(int x) {return x+N;}
int main()
{
    //WRITE("1.txt");
   while(scanf("%d", &N) == 1) {
        initialize();
        int c, x, y;
        while(scanf("%d %d %d", &c, &x, &y) == 3) {
            if(c == 0 && x == 0 && y == 0)  break;
            if(c == 1) { // setFriend
                if(find(x) == find(enemyID(y)) || find(y) == find(enemyID(x)))
                    puts("-1");
                else {
                    joint(x, y);
                    joint(enemyID(x), enemyID(y));
                }
            } else if(c == 2) { // setEnemy
                if(find(x) == find(y) || find(enemyID(x)) == find(enemyID(y)))
                    puts("-1");
                else {
                    joint(x, enemyID(y));
                    joint(y, enemyID(x));
                }
            } else if(c == 3) { // areFriend
                if(find(x) == find(y) || find(enemyID(x)) == find(enemyID(y)))
                    puts("1");
                else
                    puts("0");
            } else { // areEnemy
                if(find(x) == find(enemyID(y)) || find(y) == find(enemyID(x)))
                    puts("1");
                else
                    puts("0");
            }
        }
    }
    return 0;
}
