#include<iostream>

using namespace std;


int main(){
    int n, isPrime=1; 
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isPrime=0;
        }
    }
    if(isPrime){
        cout<<"The number is prime";
    }else{
        cout<<"The number is not prime";
    }
    return 0;
}
