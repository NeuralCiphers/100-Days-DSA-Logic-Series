// Find the Kth largest element in an Array 

#include<iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
    int arr[]={3,2,1,5,6,4};
    int k = 2;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int i=0;i<6;i++){
        minHeap.push(arr[i]);
        if(minHeap.size()> k) 
            minHeap.pop();
    }
  
    cout<<"The kth largest element is : "<<minHeap.top();
 
}