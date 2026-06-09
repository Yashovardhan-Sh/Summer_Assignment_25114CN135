#include <iostream>

using namespace std;

int fibo(int a){
    int x=0, y=1;
    for(int i = 2; i<=a; i++){
        int sum=0, temp;
        sum=x+y;
        temp=sum;
        x=y;
        y=temp;
        if (i==a){
            return sum;
        }
    }
}

int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;
    fibo(n);
    int result = fibo(n);
    cout<<result;
    return 0;

}