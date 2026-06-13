#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for (int i = 1; i<=n; i++){
        char alph = 'A';
        for(int j = 1; j<=i; j++){
            cout<<alph;
            alph++;
        }
        cout<<endl;
    }
    return 0;
}
