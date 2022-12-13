#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=0,c=0;
    cout<<"Enter Value :";
    cin>>n;
    c=n;
    while(n>0){
        a=n%10;
        b=b*10+a;
        n=n/10;        
    }
    if(c==b)
    cout<<"Palindrome ";
    else 
    cout<<"Not Palindrome ";
    return 0;

}