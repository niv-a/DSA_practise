#include<iostream>
using namespace std;

bool search( int arr[], int key, int n){

    for (int i=0; i<n; i++){
        if (arr[i]==key)
        return 1;
    }
    return 0;

}

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"Enter the no. to be searched:"<<endl;
    cin>>key;

    bool found= search(arr, 6, 10);

    if (found){
        cout<<"The element is present in the array"<<endl;
    }
    else{
        cout<<"The element is not present in the array"<<endl;
    }

    return 0;


}