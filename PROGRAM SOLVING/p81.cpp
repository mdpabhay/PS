#include<bits/stdc++.h>
using namespace std;
int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
        cout<<i<<endl;
        return 0;
    }
    return 0;
}
int maini(){
    int n;
    cout<<"Enter No :";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(prime(i)){}
        else if(i%2==0)
        cout<<2<<endl;
        else{
            cout<<i<<endl;
        }
    }
}