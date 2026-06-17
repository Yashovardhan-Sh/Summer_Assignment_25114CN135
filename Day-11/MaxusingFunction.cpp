#include<iostream>
using namespace std;

int maximum(int a, int b){
  if(a>b){
    return a;
  }else{
    return b;
  }
}

int main(){
  int x, y;
  cout<<"Enter two numbers : ";
  cin>>x>>y;
  int result = maximum(x, y);
  cout<<"Maximum : "<<result;

  return 0;
}
