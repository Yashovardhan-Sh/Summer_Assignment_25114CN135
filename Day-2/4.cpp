#include<iostream>

using namespace std;

int main(){
    int n, revNum=0;
    cout<<"Enter a number : ";
    cin>>n;
    int temp=n;
    while(n>0){
        revNum=revNum*10+(n%10);
        n/=10;
    }
    if (revNum==temp){
        cout<<"The number is palindrome";
    }else{
        cout<<"The number is not palindrome";
    }
    return 0;

}