#include<bits/stdc++.h>
using namespace std;
int pal(int n){
    int m,s=0,t=n;
    while(n>0){
    m=n%10;
    s=s*10+m;
    n/=10;
    }
    cout<<s<<" "<<t;
    if(s==t)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome ";
    return 0;
}
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;
    pal(n);
    return 0;    
}