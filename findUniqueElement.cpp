/*
https://www.codingninjas.com/codestudio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
*/

#include<iostream>
using namespace std;

int unique(int arr[], int n){

    int ans=0;
    for (int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

// void print(int arr[], int n){
//     for (int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

int main(){

    int t;
    cout<<"enter the no of testcases:"<<endl;
    cin>>t;

    while(t--){

        int size;

        cout<<"enter the no of elements:";
        cin>>size; 

        int arr[size];

        cout<<"enter the elements:";
    
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

        // cout<<t;
        cout<<unique(arr,size)<<endl;
        // unique(arr,size);
        // print(arr,size);

    }
    return 0;
}