#include <iostream>

using namespace std;

int t,a,b;
int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
    cin>>a>>b;
        while(a!=b&&a!=0&&b!=0)
        {
        if(a>b) a-=b;
        if(b>a) b-=a;
        }
        if(a==b) cout << a+b << endl;
        if(a==0) cout << b << endl;
        if(b==0) cout << a << endl;
        a=0;
        b=0;
    }
    return 0;
}
