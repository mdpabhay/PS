#include<iostream>
using namespace std;
int main(){
    int bs;
    cout<<"Enter basic Salary :";
    cin>>bs;
    int hra=bs*20/100;
    int da=bs*50/100;
    int pf=bs*11/100;
    char a;
    cout<<"Enter Grade :";
    cin>>a;
    if(a=='A')
    cout<<bs+hra+da-pf+1700;
    else
    cout<<bs+hra+da-pf+1300;
    return 0;
}