#include<iostream>
using namespace std;
int main(){
    int n,f=1;
    cout<<"Enter Value :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>f;j--)
        cout<<" ";
        for(int j=0;j<i;j++)
        cout<<i+j<<" ";
        cout<<endl;
        f++;
    }
    return 0;
}