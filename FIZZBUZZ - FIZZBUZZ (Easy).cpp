#include <iostream>
using namespace std;
int main(){int t;cin>>t;while(t--){int n;cin>>n;if(n%7==0&&n%5==0){cout<<"fizzbuzz"<<endl;continue;}if(n%5==0){cout<<"fizz"<<endl;continue;}if(n%7==0){cout<<"buzz"<<endl;continue;}cout<<n<<endl;}return 0;}
