#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"Enter Temperature :";
    cin>>t;
    if(t<0)
    cout<<"Freezing Weather ";
    else if(t<10)
    cout<<"Very Cold Weather ";
    else if(t<20)
    cout<<"Cold Weather ";
    else if(t<30)
    cout<<"Normal Weather ";
    else if(t<40)
    cout<<"Hot Weather ";
    else if(t<50)
    cout<<"Very Hot Weather ";
    else
    cout<<"Unbearable Temperature ";

    return 0;
}