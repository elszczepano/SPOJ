#include <iostream>

using namespace std;

int f,t,d=0;

int x(int s)
{
   if (s == 1) return d;
        d++;
        if (s % 2 != 0)
                return x(3 * s + 1);
        else if (s % 2 == 0)
                return x(s / 2);
}

int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
       int n;
       cin>>n;
       cout<<x(n)<<endl;
       d=0;
    }
  return 0;
}
