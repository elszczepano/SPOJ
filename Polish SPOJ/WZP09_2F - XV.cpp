#include <iostream>
#include <cstdlib>
using namespace std;
string liczba,f,g;
int e,p,suma;
int main()
{
    while(cin>>liczba)
    {
    for(int i=0; i<liczba.length(); i++)
    {
        f=liczba[i];
        p=atoi(f.c_str());
        suma+=p;
    }
    if(suma==0) exit(0);
    g=liczba[liczba.length()-1];
    e=atoi(g.c_str());
    if(suma%3==0&&(e==0||e==5)) cout << "TAK" << endl;
    else cout << "NIE" << endl;
    suma=0;
    }
    return 0;
}
