#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double a,b,c,x;
int d;
int main()
{
    while(cin>>a>>b>>c)
    {
    x=(c-b)/a;
    if(a==0&&(c-b)!=0) cout<<"BR";
    else if(a==0&&(c-b)==0) cout<<"NWR";
    else
    {
    d=x;
    if(d==x) cout<<setprecision(4)<<x<<"."<<fmod(x,x)<<fmod(x,x);
    else  cout<<setprecision(4)<<x;
    }
    }
    return 0;
}
