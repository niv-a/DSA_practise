#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){

    int s=0; int e = n-1; int key;
    int ans= -1;
    int mid = s + (e-s)/2;

    while(s<=e){

        if (key == arr[mid]){

            ans = mid;
            e = mid-1;
        }
        else if ( key < arr[mid]){

            e = mid-1;
        }
        else if ( key > arr[mid]){

            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

}

int lastOcc(int arr[], int n, int key){

    int s=0; int e = n-1; int key;
    int ans= -1;
    int mid = s + (e-s)/2;

    while(s<=e){

        if (key == arr[mid]){

            ans = mid;
            s = mid+1;
        }
        else if ( key < arr[mid]){

            e = mid-1;
        }
        else if ( key > arr[mid]){

            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

}



int main(){
    int arr[5]= {1,2,3,3,5};
    cout<< "First occurance is at the index: "<< firstOcc(arr, 5, 3);

    return 0;

}