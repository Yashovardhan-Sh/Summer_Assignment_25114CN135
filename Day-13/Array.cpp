#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" elements of array : ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Elements of array are : ";
    for(int j = 0; j<size; j++){
        cout<<arr[j]<<' ';
    }
    return 0;
}
