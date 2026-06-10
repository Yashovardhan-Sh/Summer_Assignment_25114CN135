#include<iostream>

using namespace std;

int factor(int a){
    for(int i = 1; i<=a; i++){
        if(a%i==0){
            cout<<i<<' ';
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    factor(n);
    return 0;

}