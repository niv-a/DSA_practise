#include<iostream>
using namespace std;

void reverse(int arr[],int n){

    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void print(int arr[], int size){
 for (int i=0; i<size; i++){
    cout<<arr[i]<<" "<<endl;
 }
}

int main(){
    int size;

    cout<<"enter the no of elements: "<<endl;
    cin>>size;

    int arr[size];

    cout<<"enter the array: "<<endl;
    for (int i=0; i<size; i++){
        cin>>arr[i];
    }

    reverse(arr,size);

    cout<<"the reversed array is"<<endl;
    print(arr,size);
    return 0;
}