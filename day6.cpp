// Move all Zeroes(0) to the end of the array while mantaining the relative order of the non-zero element

// code-

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,0,3,1,2};
    int j=0;
    for(int i=0;i<6;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}