#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=1;j<=i+1;j++){
        if(j!=n+1)
        cout<<j;
        }
        for(int j=i+1;j<=n;j++)
        cout<<" ";
        for(int j=i+1;j<n;j++)
        cout<<" ";
        for(int j=i+1;j>0;j--)
        cout<<j;
        cout<<endl;
    }
    return 0;
}