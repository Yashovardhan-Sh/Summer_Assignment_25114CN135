#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size], small = 0, large = 0;
    cout<<"Enter "<<size<<" elements of array : ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    for(int j = 1; j<size; j++){
        if(arr[j]<arr[small]){
            small=j;
        }
        if(arr[j]>arr[large]){
            large=j;
        }
    }
    cout<<"Smallest Number : "<<arr[small]<<endl<<"Largest Number : "<<arr[large];
    return 0;
}
