#include<iostream>
using namespace std;
 

    int main()
    {
        int i,n,prime=0;
        cout<<"enter any no for check prime or not : ";
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                prime++;
            }  
        }
        if(prime==2)
        {
            cout<<"no is prime";
        }else{
            cout<<"not prime";
        }

        return 0;
    }