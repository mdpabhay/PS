#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter Number :";
    cin>>n;
    m=n;
    while(n>0){
        cout<<n<<" ";
        n-=5;
    }
    while(n<=m){
        cout<<n<<" ";
        n+=5;
    }
    return 0;
}