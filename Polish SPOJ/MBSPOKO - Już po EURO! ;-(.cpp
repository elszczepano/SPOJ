#include <iostream>

using namespace std;

int main()
{
    int test = 0;
    while(cin>>test) {
        if(test%3==0&&test%5==0) {
            cout << "SPOKOKOKO" << endl;
            continue;
        }
        if(test%3==0) {
            cout << "KOKO" << endl;
            continue;
        }
        if(test%5==0) {
            cout << "SPOKO" << endl;
            continue;
        }
        cout << test << endl;
    }
    return 0;
}
