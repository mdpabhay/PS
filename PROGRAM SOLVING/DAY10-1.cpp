#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter No of Rows :";
    cin>>r;
    cout<<"Enter No of Column :";
    cin>>c;
    int n=r*c,count=0;
    while(n>0){
        if(n>=4&&r>=2&&c>=2){
            count++;
            n=n-4;
            r=r-2;
            c=c-1;

        }
        else if(n>=2){
            count++;
            n=n-2;
            r-=1;
            c-=1;
            
        }
        else{
            count++;
            n=n-1;
        }
    }
    cout<<"Total Bomb :"<<count;
    return 0;
}