#include<iostream>
using namespace std;

int pairSum(int arr[],int n){
    int sum;
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
          int arraysum=arr[i]+arr[j];
          if(sum==arraysum){
            cout<<arraysum;
          }
        }
    }
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    pairSum(arr,7);
}