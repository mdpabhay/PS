#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f=1;
    cout<<"Enter value :";
    cin>>n;
    for(int i=1;i<=2*n;i++){
        if(i%2!=0){
            for(int j=n;j>f;j--)
            cout<<" ";
            for(int j=1;j<=i;j++)
            cout<<"*"; 
            cout<<endl; 
            f++;        
        }
        
    }
    return 0;
}