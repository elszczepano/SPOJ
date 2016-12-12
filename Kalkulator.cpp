#include <iostream>

using namespace std;


char znak;
int a,b;

int main()
{
    while(cin >> znak >> a >> b)
    {
    if(znak=='+')
    {
       cout << a+b;
    }
    else if(znak=='-')
    {
       cout << a-b;
    }
    else if(znak=='*')
    {
       cout << a*b;
    }
    else if(znak=='/')
    {
       cout << a/b;
    }
    else if(znak=='%')
    {
       cout << a%b;
    }
    cout<<endl;
    }
    return 0;
}
