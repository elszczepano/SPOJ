#include <iostream>
#include <iomanip>



using namespace std;

double d,r,s;
double pi=3.141592654;

int main()
{
    cin>>r>>d;
    s=((r*r)-((d*d)/4))*pi;
    cout<<setprecision(5)<<s;

    return 0;
}
