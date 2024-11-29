#include<iostream>

using namespace std;

int main(){
    int size;
    cout << "Entersize of an array :  ";
    cin >> size;
 int arr[size];

int large =0;

 for(int i =0 ; i <size ; i++){
    cout << "a[" << i << "] :";
    cin >> arr[i];
 }


 for(int i =0 ; i <size ; i++){
    
    if( large < arr[i] ){
      
        large = arr[i];
    }
    

  
    
     }

   cout << "largest number is : "<< large;
}