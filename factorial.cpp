#include<iostream>
using namespace std;

int fact(int p)
{
    if(p==0)
    {
        return 1;
    }else{
        return(p*fact(p-1));
    }
}
int main()
{
    int ft,n;
    cout<<"ENTER NUMBER FOR FACTORIAL = ";
    cin>>n;
     ft=fact(n);
    cout<<"FACTORIAL = "<<ft<<endl;
    return 0;
}