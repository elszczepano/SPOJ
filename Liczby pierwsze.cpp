#include <iostream>

using namespace std;

int n,a,licznik=1,licznik2;

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        for(int i=0; i<a; i++)
        {
        if(a%licznik==0)
        {
            licznik2++;
        }
        licznik++;
        }
    if(licznik2==2) cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;
    licznik=1;
    licznik2=0;
    }
    return 0;
}
