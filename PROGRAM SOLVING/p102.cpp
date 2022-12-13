#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter no of Rows :";
    cin>>r;
    cout<<"Enter no of Column :";
    cin>>c;
    int m[r][c],ar[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cin>>m[i][j];
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cout<<m[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        ar[i][j]=m[j][i];
    }
    cout<<endl;
    for(int i=0;i<r;i++){
        for(int j=c-1;j>=0;j--)
            cout<<ar[i][j]<<" ";
            cout<<endl;
    }
    return 0;
}