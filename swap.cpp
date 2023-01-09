#include<iostream>
using namespace std;

int  main()
{
    
    int firstno,secondno,swap;
    cout<<"Enter two varible for swapping";
    cin>>firstno>>secondno;

    swap=firstno;
    firstno=secondno;
    secondno=swap;

    cout<<"First No = "<<firstno<<endl;
    cout<<"Second No = "<<secondno<<endl;

}