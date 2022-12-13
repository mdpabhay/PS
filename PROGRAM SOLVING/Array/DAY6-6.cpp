#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter String1 :";
    cin>>s1;
    cout<<"Enter String2 :";
    cin>>s2;
    int Dat[100]={0},i=0,n=0;
    while(s1[i]){
        if(int(s1[i])>=97){
            Dat[i]++;
        }
        else{
            Dat[i]++;
        }
        i++;
        n++;
    }
    i=0;
    while(s2[i]){
        if(int(s2[i])>=97){
            Dat[i]--;
        }
        else{
            Dat[i]--;
        }
        i++;
    }
    i=0;
    while(i<=26){
        if(Dat[i]>0)
        cout<<s1[i];
        i++;
    }
    return 0;
}