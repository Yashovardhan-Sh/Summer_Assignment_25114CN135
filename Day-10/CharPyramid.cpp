#include<iostream>

using namespace std;

int main(){
    int n; 
    cout<<"Enter a number : ";
    cin>>n;
    for (int i = 0; i<n; i++){
        char alph = 'A';
        for(int s=1; s<=n-i; s++){
            cout<<' ';
        }
        for(int j = 1; j<=i+1; j++){
            cout<<alph;
            alph++;
        }
        alph-=2;
        for(int k = i; k>0; k--){
            cout<<alph;
            alph--;
        }
        cout<<endl;
    }
    return 0;
}
