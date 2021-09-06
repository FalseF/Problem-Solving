#include <bits/stdc++.h>

using namespace std;

unsigned int countSetBits(unsigned int n)
{
unsigned int count = 0;
while (n)
{
  bool ck=n & 1;
    count += n & 1;
    n >>= 1;

    cout<<ck<<endl;
}
return count;
}

/* Program to test function countSetBits */
int main()
{
    int i = 9;
    cout << countSetBits(i);
    return 0;
}
