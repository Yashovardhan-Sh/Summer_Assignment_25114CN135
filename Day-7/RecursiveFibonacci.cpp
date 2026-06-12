#include <iostream>

using namespace std;

int fibo(int a){
    if (a==1){
        return 1;
    }
    if (a==0){
        return 0;
    }
    return fibo(a-1) + fibo(a-2);
}

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The Fibonacci Series : "<<endl;
    for(int i = 0; i<=n; i++){
        cout<<fibo(i)<<' ';
    }  
    return 0;
}
