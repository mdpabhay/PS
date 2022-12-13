#include<iostream>
using namespace std;
int fact(int a,int b){
    if(b==1)
    return a;
    a=b*a;
    return fact(a,b-1);
}

int main(){
    int n;
    cout<<"Enter Number ";
    cin>>n;
    cout<<fact(1,n);
    cout<<" is Factorial ";
    return 0;
}