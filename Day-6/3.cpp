#include<iostream>

using namespace std;

int countsetBits(int a){
    int count=0;
    while(a>0){
        if ((a%2)==1){
            count++;
        }
        a/=2;
    }
    return count;
    
}

int main(){
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;
    int result = countsetBits(n);
    cout<<"The number of set bits in "<<n<<" are "<<result;
    return 0;

}