#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no of Rows :";
    cin>>r;
    cout<<"Enter no of Column :";
    cin>>c;
    int ar[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cin>>ar[i][j];
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cout<<ar[i][j]<<" ";
        cout<<endl;
    }

}