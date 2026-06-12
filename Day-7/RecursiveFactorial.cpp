#include<iostream>

using namespace std;

int fact(int a){
    if (a==0){
        return 1;
    }
    return a*fact(a-1);
}

int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;
    int result = fact(n);
    cout<<n<<"!"<<" is equal to "<<result;
    return 0;
}
