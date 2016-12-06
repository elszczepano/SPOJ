#include <iostream>

using namespace std;

int D;
long long int podstawa, wykladnik;

int main()
{
    cin>>D;
    for(int i=0; i<D; i++)
    {
    cin>>podstawa>>wykladnik;
    if(podstawa%10==1)cout << "1" << endl;
    if(podstawa%10==2)
    {
    if(wykladnik%4==0) cout << "6" << endl;
    if(wykladnik%4==1) cout << "2" << endl;
    if(wykladnik%4==2) cout << "4" << endl;
    if(wykladnik%4==3) cout << "8" << endl;
    }
    if(podstawa%10==3)
    {
    if(wykladnik%4==0) cout << "1" << endl;
    if(wykladnik%4==1) cout << "3" << endl;
    if(wykladnik%4==2) cout << "9" << endl;
    if(wykladnik%4==3) cout << "7" << endl;
    }
    if(podstawa%10==4)
    {
    if(wykladnik%2==0) cout << "6" << endl;
    if(wykladnik%2==1) cout << "4" << endl;
    }
    if(podstawa%10==5) cout << "5" << endl;
    if(podstawa%10==6) cout << "6" << endl;
    if(podstawa%10==7)
    {
    if(wykladnik%4==0) cout << "1" << endl;
    if(wykladnik%4==1) cout << "7" << endl;
    if(wykladnik%4==2) cout << "9" << endl;
    if(wykladnik%4==3) cout << "3" << endl;
    }
    if(podstawa%10==8)
    {
    if(wykladnik%4==0) cout << "6" << endl;
    if(wykladnik%4==1) cout << "8" << endl;
    if(wykladnik%4==2) cout << "4" << endl;
    if(wykladnik%4==3) cout << "2" << endl;
    }
    if(podstawa%10==9)
    {
    if(wykladnik%2==0) cout << "1" << endl;
    if(wykladnik%2==1) cout << "9" << endl;
    }
    if(podstawa%10==0) cout << "0" << endl;
    }
    return 0;
}
