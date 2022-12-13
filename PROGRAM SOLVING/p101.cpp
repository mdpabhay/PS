#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Dimension of array :";
    cin>>n;
    int a[n];
    cout<<"Enter Elements of Array :";
    for(int i=0;i<n;i++)
    cin>>a[i];
    int x=0,y=n-1,d=0;
    while(x<y){
        d=a[y];
        a[y--]=a[x];
        a[x++]=d;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}