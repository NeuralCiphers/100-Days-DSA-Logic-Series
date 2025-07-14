// Day-1/100 -> Print the given pattern for n=5
//     1
//    121
//   12321
//  1234321
// 123454321

//Code :-
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int spc=1;spc<=n-i;spc++){
            cout<<" ";
        }
        for(int incnum=1;incnum<=i;incnum++){
            cout<<incnum;
        }
        for(int decnum=i-1;decnum>0;decnum--){
            cout<<decnum;
        }
        cout<<endl;
    }
}