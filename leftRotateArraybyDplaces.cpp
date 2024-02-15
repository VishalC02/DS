#include<iostream>
using namespace std;
leftRotateArraybyDplaces(int arr[],int n,int d){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
}


int main(){
    int arr1[7]={1,2,3,4,5,6,7};
    leftRotateArraybyDplaces(arr1,7,3);
    for(int i=0;i<7;i++){
        cout<<arr1[i];
    }

}