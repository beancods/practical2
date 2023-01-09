#include<iostream>
using namespace std;

int main()
{
    int n,t,sum=0;
    cout<<"enter no for reverse";
    cin>>n;
    while (n!=0)
    {
        t=n%10;
        sum=sum*10+t;
        n=n/10;
    }
    cout<<"REVERSE NUMBER = "<<sum<<endl;

    return 0;
}