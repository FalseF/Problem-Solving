

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <cstring>
#include <list>
#include <map>
#include <unordered_map>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <utility>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <limits>
      /*########  IN THE NAME OF ALLAH   ##########*/
using namespace std;
int main()
{

     char name[100],title[100];
     vector<pair<string,string>>V;
     map<string,bool>borrow,Return;

     while(scanf("\"%[^\"]\" by %[^\n]\n",name,title)){
        V.push_back(make_pair(title,name));
        borrow[name]=0;
        Return[name]=0;

     }

     scanf("%s\n",name);
     sort(V.begin(),V.end());

     while(scanf("%s ",name))
     {
         string cmd(name);
         if(cmd=="END") break;
         if(cmd=="SHELVE")
         {
             string ck1;
             for(auto it:V)
             {

             if(!borrow[it.second])
             {
                 ck1=it.second;
             }
             else if(Return[it.second])
             {
                 if(ck1.length()) printf("Put \"%s\" after \"%s\"\n", it.second.c_str(), ck1.c_str());
                    else printf("Put \"%s\" first\n", it.second.c_str());
                    borrow[it.second] = 0;
                 ck1=it.second;
             }
         }
         cout<<"END"<<endl;
         Return.clear();
         continue;
     }

     scanf("\"%[^\"]\"\n",name);
         if(cmd=="BORROW") borrow[name]=1;
         else if(cmd=="RETURN") Return[name]=1;


     }
 /************ALEYA YOUSUF ************/


 /************ALLAH IS ALMIGHTY ************/
return 0;

}
