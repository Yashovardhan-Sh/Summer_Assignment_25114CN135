#include <iostream>

using namespace std;

int power(int b, int c){
    int ans=1;
    for(int i = 1; i<=c; i++){
        ans*=b;
    }
    return ans;
}

int binaryTodecimal(int a){
    int decNum=0,count=0;
     while(a>0){
        decNum+=(a%10)*power(2, count);
        count++;
        a/=10;
    }
    return decNum;
}
int main(){

    int n;
    cout<<"Enter a  binary number : ";
    cin>>n;
    int result=binaryTodecimal(n);
    cout<<"The decimal number of "<<n<<" is "<<result;
    return 0;
}