// Find max/min element in an Array 
// arr[]={5,2,6,4,8,10}
// output :- Maximum element:10 , Minimum element:2

//code :-

#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={5,2,6,4,8,10};
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>max) max=arr[i];
        else if(arr[i]<min) min=arr[i];
    }
    cout<<"Maximum element:"<<max<<" "<<"Minimum element:"<<min;
}