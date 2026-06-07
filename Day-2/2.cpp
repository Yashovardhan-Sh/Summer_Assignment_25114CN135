#include <iostream>

using namespace std;

int main(){
    int n, revNum=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        revNum=revNum*10+(n%10);
        n/=10;
    }
    cout<<"The reversed number is "<<revNum;
    
    return 0;

}