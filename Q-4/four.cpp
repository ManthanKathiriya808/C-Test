#include<iostream>

using namespace std;

int main(){

    int size;
    cout << "Enter Size of array: ";
    cin >> size;
    int arr[size];

    for(int i =0;i<size;i++){
        cout << "a[" << i << "]: ";
        cin >> arr[i];
    }

    int *ptr = &arr[size];
    cout << "The Given Even number is ";
    for(int i =0;i<size;i++){
       if(arr[i] %2==0){
        cout << arr[i] << " . " ;
       }
    }



}