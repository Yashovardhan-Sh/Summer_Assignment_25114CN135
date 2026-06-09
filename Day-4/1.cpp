#include<iostream>

using namespace std;

int fibo(int a){
    int x=0, y=1;
    cout<<x<<' '<<y<<' ';
    for(int i =2; i<=a; i++){
        int sum=0, temp;
        sum=x+y;
        cout<<sum<<' ';
        temp=sum;
        x=y;
        y=temp;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    fibo(n);
    return 0;
}
