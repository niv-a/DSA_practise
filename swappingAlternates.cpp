#include<iostream>
using namespace std;

void swapped(int n, int arr[]){
    
    for (int i=0;i,n;i++){
        if (i+1<n){
            swap(arr[i],arr[i+1]);
        }
        i+=2;    
    }

}

void print(int n, int arr[]){
    cout<<"The array with alternate swapped elemets"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];    
    }
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

    cout<<"the reversed array is"<<endl;
    print(arr,n);
    return 0;
}