#include<iostream>
using namespace std;
int main(){
    int n,s=1;
    cout<<"Enter Value :";
    cin>>n;
    for(int  i=2;i<n;i++){
        if(n>0&&n%i==0){
           s=s*i;
           n=n/i; 
        }
    }
    cout<<s;
    return 0;

}