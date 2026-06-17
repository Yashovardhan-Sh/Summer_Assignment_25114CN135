#include<iostream>
using namespace std;

int sum(int x, int y){
  return x+y;
}

int main(){
  int a, b;
  cout<<"Enter two numbers : ";
  cin>>a>>b;
  int result = sum(a,b);
  cout<<"Sum : "<<result;

return 0;
}
