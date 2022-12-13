#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cout<<"Enter No1 :";
    cin>>a;
    cout<<"Enter No2 :";
    cin>>b;
    cout<<"Enter nth Digit :";
    cin>>k;
    while(k>1){
        a/=10;
        k--;
    }
    cout<<a;
    a=a%10;
    cout<<a;
    cout<<"Number is ";
    cout<<pow(b,a);
    return 0;
}