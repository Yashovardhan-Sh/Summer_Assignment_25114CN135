#include<iostream>
using namespace std;

int countNum(int a){
    int count=0; 
    while(a>0){
        a/=10;
        count++;
    }
    return count;    
}

int power(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

int armNum(int b){
    int sum=0,temp=b;
    while(b>0){
        sum+=power((b%10), countNum(temp));
        b/=10;
    }
    return sum;
}

int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int result=armNum(i);
        if(result==i){
            cout<<i<<' ';
        }
    }
    return 0;
}
