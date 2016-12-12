#include <iostream>

using namespace std;

int t,c,k,w;

int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>c>>k>>w;
        if(w*c<=k) cout<< "yes" <<endl;
        else cout << "no" << endl;

    }
    return 0;
}
