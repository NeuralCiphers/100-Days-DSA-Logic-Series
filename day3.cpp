// Reverse given Array 
// arr = {1,2,3,4,5}

//Code :-



#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    // Method 1
    cout<<"Just printing the array in reverse order:";
    for(int i=sizeof(arr)/sizeof(arr[0])-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }cout<<endl;

    //Method 2
    cout<<"Reversing the array by changing the array :";
    int i=0;
    int j=sizeof(arr)/sizeof(arr[0])-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++,j--;
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<" ";
    }
}