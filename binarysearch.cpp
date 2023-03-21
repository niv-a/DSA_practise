#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    
    while(start<=end){
        if (key==arr[mid]){
            return mid;
    }
        else if (key<arr[mid]){
             end = mid-1;
    }
        else if(key>arr[mid]){
             start = mid+1;
    }
    mid = start+(end-start)/2;
    }
    
    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int index = binarySearch(even, 6, 18);

    cout << " Index of 18 is " << index << endl;

    return 0;

}