#include <iostream>

using namespace std;

int t;
string word;

int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>word;
        for(int i=0; i<word.length()/2; i++)
        {
            cout<<word[i];
        }
        cout<<endl;
    }
    return 0;
}
