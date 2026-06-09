#include<iostream>
#include<math.h>

using namespace std;

int countNum(int a){
    int count=0;
    while(a>0){
        a/=10;
        count++;
    }
    return count;
}

int armNum(int b){
    int sum=0, temp=b;
     while(b>0){
       sum+=pow((b%10), countNum(temp));
       b/=10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int result=armNum(n);
    if(n=result){
        cout<<"It is an Armstrong number";
    }else{
        cout<<"It is not an Armstrong number";
    }
    return 0;

}