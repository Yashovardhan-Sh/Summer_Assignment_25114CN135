#include <iostream>

using namespace std;

int fact(int a){
    int f=1;
    for(int i =1; i<=a; i++){
         f*=i;
    }
    return f;
}

int main(){

    int n, sum=0;
    cout<<"Enter a number : ";
    cin>>n;
    int m=n;
    while(n>0){
        sum+=fact(n%10);
        n/=10;
    }
    if(sum==m){
        cout<<"It is a strong number";
    }else{
        cout<<"It is not a strong number";
    }
    return 0;

}