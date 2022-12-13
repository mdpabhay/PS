#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter Co-ordinates :";
    cin>>x>>y;
    if(x<0&&y<0)
    cout<<"3rd Quadrant ";
    else if(x>0&&y<0)
    cout<<"4th Quadrant ";
    else if(x>0&&y>0)
    cout<<"1st Quadrant ";
    else 
    cout<<"2nd Quadrant ";
    return 0;
}