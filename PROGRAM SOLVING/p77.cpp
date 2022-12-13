//find the roots of a quadratic equation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter coefficient of Equation :";
    cin>>a>>b>>c;
    cout<<"Roots are :";
    if(b*b-4*a*c<0){
        cout<<"Imaginary Roots";
        return 0;
    }
    cout<<(-b+sqrt(b*b-4*a*c))/2*a;
    cout<<(-b-sqrt(b*b-4*a*c))/2*a;
    return 0;
}