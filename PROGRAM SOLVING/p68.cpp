#include<bits/stdc++.h>
using namespace std;
int spal(char a[],int n){
    int j=0;
    char b[n];
    cout<<"Enter String :";
    cin>>a;
    for(int i=n-1;i>=0;i--)
    b[j++]=a[i];
    if(a==b)
    cout<<"Palindrome ";
    else
    cout<<"Not Palindrome ";

}
int main(){
    int n;
    cout<<"Enter Dimension :";
    cin>>n;
    char a[n];
    spal(a,n);    
    return 0;
}