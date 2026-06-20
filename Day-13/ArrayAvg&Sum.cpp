#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size], sum=0;
    cout<<"Enter "<<size<<" elements of array : ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    for(int j = 0; j<size; j++){
        sum+=arr[j];
    }
    int avg = (sum/size);
    cout<<"Sum : "<<sum<<endl<<"Average : "<<avg;
    return 0;
}
