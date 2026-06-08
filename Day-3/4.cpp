#include<iostream>

using namespace std;

int main(){
    int x, y, maxNum;
    cout<<"Enter first number : ";
    cin>>x;
    cout<<"Enter second number : ";
    cin>>y;
    if(x>y){
        maxNum=x;
    }else{
        maxNum=y;
    }
    while(true){
        if (maxNum%x==0 && maxNum%y==0){
            cout<<"The LCM is "<<maxNum;
            break;
        }
        maxNum++;
    }
    return 0;
}