#include <iostream>

using namespace std;

int main()
{
    int test = 0;
    cin>>test;
    while(test--) {
        int arraySize = 0;
        cin>>arraySize;
        int testArray[arraySize] ,arrayReverse[arraySize];
        for(int i=0; i<arraySize; i++) {
            int arrayCell  = 0;
            cin>>arrayCell;
            testArray[i]=arrayCell;
        }
        for(int i=0; i<arraySize; i++) {
            arrayReverse[i] = testArray[arraySize-i-1];
            cout << arrayReverse[i]<< " ";
        }
        cout << endl;
    }
    return 0;
}
