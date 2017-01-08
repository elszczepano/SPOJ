#include <iostream>

using namespace std;
string wyraz;
int main()
{
    while(cin>>wyraz)
    {
    for(int i=0; i<wyraz.length(); i++)
    {
        cout<<wyraz[wyraz.length()-(i+1)];
    }
    cout<<endl;
    }
    return 0;
}
