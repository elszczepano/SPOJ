#include<iostream>
#include<cstdlib>
using namespace std;


int t,suma,n;
int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
        int tab[n];
        cin>>tab[i];
        suma= suma + tab[i];
        }
        cout<<suma<<endl;
        suma=0;
    }
    return 0;
}
