#include<iostream>
using namespace std;
int main(){
    string a,b;
    int n=0,i=0;
    cout<<"Enter String :";
    cin>>a;
    while(a[n])
    n++;
    while(a[i]){
        b[i++]=a[n--];
    }
    i=0;
    while(a[i]){
        cout<<b[i++]<<" ";
    }    
    return 0;
}