#include<iostream>
using namespace std;
int  main(){
    int x,y,z;
    cout<<"Enter Three Numbers :";
    cin>>x>>y>>z;
    if(x>y&&x>z)
    cout<<x<<" is Largest ";
    else if(y>z)
    cout<<y<<" is Largest ";
    else
    cout<<z<<" is Largest ";
    return 0;
}