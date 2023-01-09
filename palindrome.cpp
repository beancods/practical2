#include<iostream>
#include<string.h>
using namespace std;
int palidnrome(char[]);
    int main()
    {
        int i,size,l;
        char sm[20];
        cout<<"enter any string for palindrome";
        cin>>sm;
        if(palidnrome(sm))
        {
            cout<<"it is palindrome ";
        }else{
            cout<<"it is not palindorme"; 
        }
    
        return 0;
    }       

int palidnrome(char s[])
{
    int i,l,size;
    l=strlen(s);
    size=l/2;
    for(i=0;i<size;i++)
    {
        if(s[i]!=s[l-1-i]){
            return 0;
        }else{
            return 1;
        }
    }
}
