#include<iostream>
using namespace std;



int main()
{
    int a[10];
    cout<<"enter the value for comparision";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    int largest=0;
    for(int i=0;i<10;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
        }
    }
    cout<<"Largest element = "<<largest<<endl;
    return 0;
}