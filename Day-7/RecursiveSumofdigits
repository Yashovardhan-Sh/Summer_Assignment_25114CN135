#include<iostream>

using namespace std;

int sumDigits(int a){
    if(a==0){
        return 0;
    }
    return (a%10) + sumDigits(a/10);
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int result = sumDigits(n);
    cout<<"The sum of digits of "<<n<<" is "<<result;
    return 0;
}
