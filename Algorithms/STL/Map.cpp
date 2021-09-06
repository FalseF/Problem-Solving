
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
map< string, int  > m;
    string goru;

    while( cin >> goru ) {
        if( goru == "moro" ) break;
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;
    }
}
