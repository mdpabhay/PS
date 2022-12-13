#include<bits/stdc++.h>
using namespace std;
int slen(char str[]){
    int n=0;
    for(int i=0;str[i]!='\0';i++){
        n++;
    }
    cout<<"Length :"<<n;

}
int main(){
    char a[100];
    cout<<"Enter String :";
    cin>>a;
    slen(a);
    return 0;
}