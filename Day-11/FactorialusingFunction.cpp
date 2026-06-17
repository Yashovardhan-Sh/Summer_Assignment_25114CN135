#include<iostream>
using namespace std;

long long factorial(int a){
    if(a==0){
        return 1;
    }
    return a*factorial(a-1);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int result = factorial(n);
    cout<<"Factorial : "<<result;

    return 0;
}
