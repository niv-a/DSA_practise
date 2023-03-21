#include<iostream>
#include<math.h>
using namespace std;

// int power(n){

//     int n;
//     int a=0,b=0;

//     while (n!=0){
//         // int bit = n&1;
//         // ans = (bit * pow(10,i))+ans;
//         // n=n>>1;
//         // i++;

//         a= n%2;
//         b=b+a;
//     }


//     return b;
// }

int main(){

    int n;
    cin>>n;
    int a=0,b=0;

    while (n!=0){
        // int bit = n&1;
        // ans = (bit * pow(10,i))+ans;
        // n=n>>1;
        // i++;

        a= n%2;
        b=b+a;
        n/=2;
    }

    if (b==1){
        cout<<"this number is a power of 2"<<endl;
    }
    else {
        cout<<"this number is not a power of 2"<<endl;       
    }



}