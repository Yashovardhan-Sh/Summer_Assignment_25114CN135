#include<iostream>

using namespace std;

int main(){
    int x,y,remainder, a, b;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    a=x;
    b=y;
    while(y>0){
        remainder=(x%y);
        x=y;
        y=remainder;
    }
    cout<<"The GCD of "<<a<<" and "<<b<<" is "<<x;
    return 0;

}