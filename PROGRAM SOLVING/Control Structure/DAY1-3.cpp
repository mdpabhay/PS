#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Character :";
    cin>>a;
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    cout<<"Vowel";
    else
    cout<<"Constant";
    return 0;
}