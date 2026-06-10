#include<iostream>
using namespace std;


bool prime(int b){
    if (b < 2) return false; 
    for (int j = 2; j * j <= b; j++) {
        if (b % j == 0) {
            return false;
        }
    }
    return true;

}

int largePrime(int c){
    int maxPrime=-1;
    for(int i = 1; i<=c; i++){
        if(c%i==0){
            if(prime(i)){
                if(i>maxPrime){
                    maxPrime=i;
                }
            }
        }
    }
    return maxPrime;
}


int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;
    int result= largePrime(n);
    if(result!=-1){
        cout<<"The largest prime number is "<<result;
    }else{
        cout<<"No prime factors found";
    }
   
   
    return 0;
}
