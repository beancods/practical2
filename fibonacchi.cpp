#include<iostream>
using namespace std;

int main()
{
    int n,temp,first_no=0,second_no=1;
    cout<<"enter no for find fibonnaci no : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        temp=first_no+second_no;
        cout<<"fibonnaci = "<<first_no<<"+"<<second_no<<"="<<temp<<endl;
        first_no=second_no;
        second_no=temp;
    }
    
    return 0;
}