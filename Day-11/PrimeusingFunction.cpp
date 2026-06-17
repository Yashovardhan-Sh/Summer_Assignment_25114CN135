#include<iostream>
using namespace std;

int prime(int a){
  for(int i = 2; i*i<=a; i++){
      if(a%i == 0){
          return false;
      }else{
          return true;
      }
  }
}

int main(){
  int x;
  cout<<"Enter a number : ";
  cin>>x;
  if(x<2){
    cout<<"No prime numbers less than 2";
  }else{
    bool isPrime = prime(x);
    if(isPrime){
        cout<<"Prime Number";
    }else{
        cout<<"Non Prime Number";
    }
  }
  return 0;
}
