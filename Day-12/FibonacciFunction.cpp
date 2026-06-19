#include<iostream>

using namespace std;
void fibonacci(int a){
    int x=0, y=1;
    if(a==0){
        cout<<x;
    }
    else if(a==1){
        cout<<x<<' '<<y;
    }else{
    cout<<x<<' '<<y<<' ';
    for(int i = 2; i<=a; i++){
        int sum=0;
        sum=x+y;
        cout<<sum<<' ';
        x=y;
        y=sum;
        }
    }
}
int main(){
    int n;
    cout<<"Enter a number upto which term you want Fibonacci Series : ";
    cin>>n;
    fibonacci(n);
    return 0;
}
