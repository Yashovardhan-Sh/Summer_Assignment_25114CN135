#include<iostream>
using namespace std;

int revNum(int a, int rev=0){
    if(a==0){
        return rev;
    }
    return revNum(a/10, rev*10+(a%10)); 
}

int main(){
    int n; 
    cout<<"Enter the number : ";
    cin>>n;
    int result= revNum(n);
    cout<<"Reversed number : "<<result;
    return 0;
}
