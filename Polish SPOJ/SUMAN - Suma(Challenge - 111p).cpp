#include<iostream>
int n,s;
int main()
{while(std::cin>>n){while(n>0){s+=n;n--;}std::cout<<s<<std::endl;s=0;}}
