#include <iostream>
using namespace std;

void reverse(int arr1[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr1[start],arr1[end]);
        start++;
        end--;
    }
}
void printArray(int arr1[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}
int main() {
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={7,6,5,4,32};
    

    reverse(arr1,6);
    reverse(arr2,5);


    printArray(arr1,6);
    printArray(arr2,5);
}