#include<iostream>
using namespace std;
int pow(int a,int b,int p){
    if(b==0)
    return p;
    p=p*a;
    b--;
    return pow(a,b,p);
}
int main(){
    int a,b,p=1;
    cout<<"Enter Value :";
    cin>>a;
    cout<<"Enter Power :";
    cin>>b;
    cout<<pow(a,b,p);
    return 0;
}