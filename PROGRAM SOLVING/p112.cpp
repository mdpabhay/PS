#include<bits/stdc++.h>
using namespace std;
int srev(char str[],int n){
    int i=0,r=n-1,x;
    while(i<r){
        x=str[i];
        str[i++]=str[r];
        str[r--]=x;        
    }
    for(int i=0;i<n;i++)
    cout<<str[i];
}
int main(){
    int n;
    cout<<"Enter Dimension :";
    cin>>n;
    char a[n];
    cout<<"Enter String :";
    cin>>a;
    srev(a,n);    
    return 0;
}