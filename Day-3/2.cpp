#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n<2){
        cout<<"No prime numbers less than 2";
        exit(0);
    }
cout<<"Prime numbers upto "<<n<<" are : "<<endl;

    for(int i=2; i<=n; i++){
        int isPrime=1;
       for(int j=2; j<i; j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
    if(isPrime){
        cout<<i<<' ';
    }
    }
    return 0;

}
