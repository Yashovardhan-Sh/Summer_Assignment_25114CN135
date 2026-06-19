#include<iostream>
#include<cmath>
using namespace std;

int digitsFunc(int c){
    int count=0;
    while(c>0){
        c/=10;
        count++;
    }
    return count;
}
int armstrong(int a){
    int sum=0;
    int digits = digitsFunc(a);
    while(a>0){
        sum+=round(pow(a%10, digits));
        a/=10;
    }
    return sum;
}
int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;
    int check = armstrong(n);
    if(check==n){
        cout<<"It is an Armstrong number";
    }else{
        cout<<"It is not an Armstrong number";
    }
    return 0;
}
