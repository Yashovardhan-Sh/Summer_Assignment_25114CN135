#include<iostream>

using namespace std;

int palindrome(int a){
    int revNum=0;
    while(a>0){
        revNum=revNum*10 + a%10;
        a/=10;
    }
    return revNum;
}

int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;
    int checker = palindrome(n);
    if(checker == n){
        cout<<"Number is palindrome";
    }else{
        cout<<"Number is not palindrome";
    }
    return 0;
}
