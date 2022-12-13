#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,k=0;
    cout<<"Enter Row of Matrix :";
    cin>>r;
    cout<<"Enter Column of Matrix :";
    cin>>c;
    int ar[r][c],br[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cin>>ar[i][j];
    }    
    for(int i=0;i<r;i++){
        k=0;
        for(int j=c-1;j>=0;j--){
        br[i][k++]=ar[j][i];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        cout<<br[i][j]<<" ";
        cout<<endl;
    }  
    return 0;    
}