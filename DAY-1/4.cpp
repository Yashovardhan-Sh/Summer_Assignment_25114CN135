#include<iostream>

using namespace std;

int main(){
    int n, count = 0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n>0){
        n%10;
        count++;
        n/=10;
    }
    cout<<"Number of digits = "<<count;
    return 0;

}