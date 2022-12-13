#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter Number :";
    cin>>n;
    while(n>9){
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        if(sum<10){
            cout<<sum;
            return 0;
        }
        n=sum;
    }
}