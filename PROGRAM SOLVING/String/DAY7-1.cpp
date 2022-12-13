#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter String :";
    cin>>a;
    int i=0;
    while(a[i])
    i++;
    cout<<"Length of String :"<<i;
    return 0;
}