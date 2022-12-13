#include<iostream>
using namespace std;
int mm(int a,int b,int c,int d,int e){
    int median=c;
    cout<<c<<" is Median "<<endl;
    int mean=(a+b+c+d+e)/5;
    cout<<mean<<" is Mean ";
    return 0;
}
int main(){
    int a,b,c,d,e;
    cout<<"Enter Five Numbers :";
    cin>>a>>b>>c>>d>>e;
    mm(a,b,c,d,e);
    return 0;
}