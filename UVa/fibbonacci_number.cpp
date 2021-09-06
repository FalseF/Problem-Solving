#include<bits/stdc++.h>
using namespace std;
#define NIL -1
#define MAX 100

int lookup[MAX];
void _initialize()
{
  int i;
  for (i = 0; i < MAX; i++)
    lookup[i] = NIL;
}

/* function for nth Fibonacci number */
int fib(int n)
{
    cout<<"Outer "<<n<<endl;
   if (lookup[n] == NIL)
   {
       cout<<"iner "<<n<<endl;
      if (n <= 1)
         lookup[n] = n;
      else
         lookup[n] = fib(n-1) + fib(n-2);
   }

   return lookup[n];
}

int main ()
{
  int n = 5;
  _initialize();
  printf("Fibonacci number is %d ", fib(n));
  return 0;
}
