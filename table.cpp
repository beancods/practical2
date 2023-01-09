#include<iostream>
using namespace std;

int main()
{
    int table;
    cout<<"ENTER ANY NUMBER FOR TABLE : ";
    cin>>table;
    cout<<"TABLE OF "<<table<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<table<<"*"<<i<<"="<<table*i<<endl;
    }
    return 0;
}