#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,i=1,j=1;
    cout<<"Enter no of Rows :";
    cin>>r;
    cout<<"Enter no of Column :";
    cin>>c;
    int ar[r][c];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++)
        cin>>ar[i][j];
    }
    while(1){
        cout<<ar[i][j]<<" ";
        if(j<c&&i<r)
        j++;
        else if(j==c&&i<r)
        i++;
        else if(i==r&&j>1)
        j--;
        else if(j==1&&i>--r){
            i--;
        }        
    if(i==r/2&&j==c/2||i==1&&j==1){
        cout<<ar[2][2];
        return 0;
        }
    }
}