#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of Chocolata Squares :";
    cin>>n;
    int a[n], x=0,i;
    cout<<"Enter Tastyness of chocolate ";
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>x)
        x=a[i];
    }
    cout<<"Chocolate Recieve has Tastyness : "<<x;
return 0;
}