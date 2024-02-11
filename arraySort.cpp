#include<iostream>
using namespace std;

int arraySorting(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}


int main(){
    int arr[7]={2,1,3,5,4,6,8};
    cout<<"The Array is Sorted:"<<arraySorting(arr,7)<<endl;
}