#include<iostream>

using namespace std;

int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;
    for (int i = 1; i<=n; i++){
        if(i==1 || i==n){
            for(int j = 1; j<=n; j++){
                cout<<'*';
            }
        }else{
        cout<<'*';
        for(int s = 1; s<=n-2; s++){
            cout<<' ';
        } 
        cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}
