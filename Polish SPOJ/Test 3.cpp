#include <iostream>
#include <cstdlib>
using namespace std;
/* STUPID BUT IT WORKS */
int table[100000],n=1,f,licznik=0;
int main()
{
    table[0]=42;
    while(licznik<3)
    {

    cin>>f;
    table[n]=f;
    cout<<table[n]<<endl;
    if(table[n-1]!=42&&table[n]==42) licznik++;
    n++;
    }
    return 0;

}
