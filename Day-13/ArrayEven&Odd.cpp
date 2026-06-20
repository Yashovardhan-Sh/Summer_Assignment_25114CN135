#include<iostream>

using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size], ceven = 0, codd = 0;
    cout<<"Enter "<<size<<" elements of array : ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    for(int j = 0; j<size; j++){
        if(arr[j]%2 == 0){
            ceven++;
        }else{
            codd++;
        }
    }
    cout<<"Even Numbers : "<<ceven<<endl<<"Odd Numbers : "<<codd;
    return 0;
}
