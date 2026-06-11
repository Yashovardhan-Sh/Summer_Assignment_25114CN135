#include<iostream>

using namespace std;

int power(int b, int c){
    int ans=1;
    for(int i=1; i<=c;i++){
        ans*=b;
    }
    return ans;
}

int decimalTobinary(int a){
    int biNum=0, count=0;
    while(a>0){
        biNum += power(10,count)*(a%2);
        count++;
        a/=2;
    }
    return biNum;
}

int main(){
    int n; 
    cout<<"Enter a decimal number : ";
    cin>>n;
    int result=decimalTobinary(n);
    cout<<"Binary Number of "<<n<<" is "<<result;
    return 0;
}
