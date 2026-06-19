#include<iostream>

using namespace std;
int perfNum(int a){
    int sum=0;
    for(int i=1; i<a; i++){
        if(a%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;
    int result=perfNum(n);
    if(result==n){
        cout<<"Perfect number";
    }else{
        cout<<"not a Perfect number";
    }


    return 0;
}
