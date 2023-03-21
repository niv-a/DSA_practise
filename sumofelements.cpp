// #include<stdio.h>
#include<iostream>
using namespace std;

int sumOfElements( int arr[], int n){
    int sum=0;

    for(int i=0; i<n; i++){
        // cin>>"enter the elements:">>arr[i];
        sum=sum+arr[i];

    }
    return sum;

}

int main(){

    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }    
    cout<<"the sum is:"<<sumOfElements(num,size)<<endl;


}