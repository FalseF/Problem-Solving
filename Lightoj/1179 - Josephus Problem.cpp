#include <iostream>
using namespace std;
typedef long long ll;
ll josephus(ll n, ll k)
{
    if (n == 1)
        return 1;
    else
        /* The position returned by josephus(n - 1, k)
        is adjusted because the recursive call
        josephus(n - 1, k) considers the
        original position k % n + 1 as position 1 */
        return (josephus(n - 1, k) + k-1) % n + 1;
}

// Driver Program to test above function
int main()
{
    ll cs=0,t,n,k;
    cin>>t;
    while(t--)
    {
        cs++;
    cin>>n>>k;
    //cout << "The chosen place is " << josephus(n, k);
      cout<<"Case "<<cs<<": "<<josephus(n,k)<<endl;
    }
    return 0;

}

