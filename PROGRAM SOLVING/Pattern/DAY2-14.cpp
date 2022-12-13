#include<bits/stdc++.h>
using namespace  std;
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>0;j--){
            if(i==1||i==n||i==j)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}