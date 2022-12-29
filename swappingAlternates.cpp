#include<iostream>
using namespace std;

void swapped(int arr[],int n){
    int temp =0;
    for (int i=0;i<n;i+=2){
        if (i+1<n){
            // swap(arr[i],arr[i+1]);
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;

        }    
    }

}

void print(int arr[],int n){
    cout<<"The array with alternate swapped elemets"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";    
    } cout<<endl;
}

int main(){
    int n;

    cout<<"enter the no of elements: "<<endl;
    cin>>n;

    int arr[n];

    cout<<"enter the array: "<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    swapped(arr,n);

    cout<<"the swapped array is"<<endl;
    print(arr,n);
    return 0;
}