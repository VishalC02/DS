#include<iostream>
#include<climits>
using namespace std;
int smallestElement(int arr[],int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        if(smallest!=arr[i]&&arr[i]<ssmallest){
            ssmallest=arr[i];
        }
    }
    return ssmallest;
}

int main(){
    int arr[7]={2,1,3,5,4,6,8};

    cout<<"The Second Smallest element in the array:"<<smallestElement(arr,7)<<endl;

    
}