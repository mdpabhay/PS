#include<iostream>
using namespace std;
int main(){
    int a,b,c,A,B,C;
    cout<<"Enter Three sides of triangle : ";
    cin>>a>>b>>c;
    cout<<"Enter Corresponding angles of triangle :";
    cin>>A>>B>>C;
    if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
    cout<<"RIGHT ANGLE TRIANGLE ";
    else if(a==b||b==c||a==c)
    cout<<"ISOSCLES TRIANGLE ";
    else if(a==b&&b==c&&c==a)
    cout<<"EQILATERAL TRIANGLE ";
    else if(A+B==C||A==B+C||B==A+C)
    cout<<"Scalene Triangle ";
    return 0;
}