#include<iostream>
using namespace std;
int largeElement(int arr[],int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}


int main(){
    int arr[6]={3,12,4,5,17,14};

    cout<<"Largest Element in the array:"<<largeElement(arr,6)<<endl;

}