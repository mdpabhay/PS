#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Value :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--)
        cout<<" ";
        for(int j=i-1;j>0;j--)
        cout<<j+1;
         for(int j=0;j<i;j++)
        cout<<j+1;
        cout<<endl;
    }
    return 0;
}