#include<iostream>
using namespace std;

int min(int n, int arr[]){
    int a= arr[0];
    for(int i=0;i<n;i++){
        if (a<arr[i]){
            a= arr[i];
        }
        

    }
    return a;
}

int max(int n, int arr[]){
    int b= arr[0];
    for(int i=0;i<n;i++){
        if (b<arr[i]){
            b= arr[i];
        }
    }
    return b;
}

void minmax(int n, int arr[]){
    int min = arr[0], max = arr[0], i;
    for(i = 0; i < n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "min : " << min << endl;
    cout << "max : " << max << endl;
}

int main(){
     int n;

     cout<<"Enter the size of the array"<<endl;
     cin>>n;

     int arr[n];

     for(int i=0; i<n ; i++){
        cin>>arr[i];
     }

    minmax(n,arr);

    //  cout<< "the min element is: "<< min(n,arr);
    //  cout<< "the max element is: "<< max(n,arr);

     return 0;
}