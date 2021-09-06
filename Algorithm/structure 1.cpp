#include <bits/stdc++.h>
using namespace std;
struct faizul
{
    int name,age;
    //int age;
    faizul(int N,int a)
    {
        name=N;
        age=a;
    }
};
int main()
{
//    faizul P;
//    cin>>P.name>>P.age;
//    cout<<P.name<<" "<<P.age<<endl;

//    queue <faizul> Q;
//    string a;
//    int b;
//    cin>>a>>b;
//    Q.push(faizul("faizul",19));
//    Q.push(faizul("sourav",20));
//    while(!Q.empty())
//    {
//        cout<<Q.front().name<<" "<<Q.front().age<<endl;
//        Q.pop();
//    }


    vector <faizul> V[100];
    vector <faizul> :: iterator it;
    V[1].push_back(faizul(2,20));
    V[2].push_back(faizul(1,21));
    V[2].push_back(faizul(21,1));
    V[3].push_back(faizul(12,20));
    //    for(int i=0;i<V.size();i++)
    //        cout<<V

        for(int i=0;i<4;i++){
                for(int j=0;j<V[i].size();j++)
            cout<<V[i][j].name<<" ";//<<V[i][j].age<<endl;
        }

}
