#include <iostream>

using namespace std;
int t,n;
int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int tab[n];
        for(int i=0; i<n; i++)
        {
        cin>>tab[i];
        }
        for(int i=0; i<n-1; i++)
        {
            cout<<tab[i+1]<<" ";
        }
        cout<<tab[0]<<endl;
    }
    return 0;
}
