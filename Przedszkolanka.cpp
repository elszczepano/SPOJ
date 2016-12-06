#include<iostream>
#include<cstdlib>
using namespace std;

int NWD(int a, int b)
{
    while(a!=b)
       if(a>b)
           a-=b;
       else
           b-=a;
    return a;
}
int t;
int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a, b;
        cin>>a>>b;
        cout<< a*b/(NWD(a,b))<<endl;
    }

    return 0;
}
