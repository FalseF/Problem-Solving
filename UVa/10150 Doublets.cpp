#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <cstring>
using namespace std;

vector<string> dict;
map<string, int> pos;
const int N = 25143;
int next2[N];
string s, t;
void bfs()
{
    memset(next2, -1, sizeof(next2));
    int ids = pos[s];
    int idt = pos[t];
    next2[idt] = -2;
    queue<int> q;
    q.push(idt);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        string s2 = dict[u];
        for(int i = 0; s2[i]; i++)
            for(int c = 'a'; c <= 'z'; c++) {
                string t2 = s2;
                t2[i] = c;
                if(t2 != s2) {
                    if(pos[t2]>0) {
                        int v = pos[t2];
                        if(next2[v] == -1) {
                            next2[v] = u;
                            if(v == ids) goto stop;
                            q.push(v);
                        }
                    }
                }
            }
    }
    stop:
    if(next2[ids] == -1) cout << "No solution." << endl;
    else
        for(int i = ids; i != -2; i = next2[i]) cout << dict[i] << endl;
}

int main()
{
    int cnt = 1;
    string word;
    dict.push_back("1111111111");
    while(getline(cin, word) && word != "" ) {
        pos[word] = cnt++;
        dict.push_back(word);
    }

    int flag = 0;
    while(cin >> s >> t) {
        if(flag) cout << endl;
        else flag = 1;
        if(pos[s]<=0) cout << "No solution." << endl;
        else if(pos[t]<=0) cout << "No solution." << endl;
        else bfs();
    }

    return 0;
}
