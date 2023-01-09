#include<iostream>
using namespace std;

class add
{
    public:
    int a,b;
    void get()
    {
    cout<<"Enter the value of a and b :";
    cin>>a>>b;
    }
};
class sum:public add{
    public:
    void addition()
    {
        int c=a+b;
        cout<<"sum = "<<c<<endl;
    }

};

int main()
{
    sum s1;
    s1.get();
    s1.addition();
    return 0;
}