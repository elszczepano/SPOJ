#include <iostream>

using namespace std;

int C;
string word;

int main()
{
    cin>>C;
    for(int i=0; i<C; i++)
    {
        cin>>word;
        int sum=1;
        for(int j=0; j<word.length(); j++)
        {
            if(word[j]==word[j+1])sum++;
            else
                    {
                        if(sum <2)
                        {
                            cout << word[j];
                            sum = 1;
                        }
                        else if(sum==2)
                        {
                            cout << word[j-1]<<word[j];
                            sum = 1;
                        }
                        else
                        {
                            cout << word[j] << sum;
                            sum = 1;
                        }
                    }
                }
                cout << endl;
        }
    return 0;
}
