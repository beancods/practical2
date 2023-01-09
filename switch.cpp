#include<iostream>
using namespace std;


int main()
{
    float pi=3.14;
    int n,radius,lenght,width,side;
    cout<<"ENTER 1 FOR AREA OF CIRCLE"<<endl;
    cout<<"ENTER 2 FOR AREA OF RECTANGLE"<<endl;
    cout<<"ENTER 3 FOR AREA OF SQUARE"<<endl;
    cin>>n;

    switch (n)
    {
    case 1: cout<<"enter value of radius : ";
            cin>>radius;
            cout<<"AREA OF CIRCLE = "<<float(pi*radius*radius);
        break;
    case 2: cout<<"enter valur of lenght and width: ";
            cin>>lenght>>width;
            cout<<"AREA OF RECTANGLE ="<<lenght*radius;
            break;
    case 3: cout<<"enter the value of side :";
            cin>>side;
            cout<<"AREA OF SQUARE = "<<side*side<<endl;
    default:
        break;
    }
    return 0;
}