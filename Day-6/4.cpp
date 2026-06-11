#include<iostream>
using namespace std;

int power(int b, int c){
    int num=1;
    for(int i = 1; i<=c; i++){
        num*=b;
    }
    return num;
}

int main(){
    int x, n; 
    cout<<"Enter the base : ";
    cin>>x;
    cout<<"Enter the power : ";
    cin>>n;
    int result= power(x,n);
    cout<<x<<" to the power "<<n<<" is equals to : "<<result;
    return 0;
}
