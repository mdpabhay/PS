#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cout<<"Enter position of Cat1 :";
    cin>>a;
    cout<<"Enter position of Cat2 :";
    cin>>b;
    cout<<"Enter position of Mouse :";
    cin>>c;
    d=a-c;
    e=b-c;
    if(d<0)
    d=-d;
    if(e<0)
    e=-e;
    if(d==e)
    cout<<"Mouse Ran ";
    else if(d<e)
    cout<<"Cat1 catch Mouse";
    else
    cout<<"Cat2 catch Mouse";
    return 0;    
}