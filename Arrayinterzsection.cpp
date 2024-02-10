#include<iostream>
using namespace std;
int intersection(int arr1[],int arr2[],int n,int m){
    int ans[n];
    for(int i=0;i<n;i++){
        int element=arr1[i];
        for(int j=0;j<m;j++){
            if(element==arr2[j]){
                cout<<arr2[j]<<'\t';
                arr2[j]=-112211;
                break;
            }
        }
    }
   
}

int main(){
      int arr1[5]={1,2,3,4,5};
      int arr2[4]={3,4,6 };
      intersection(arr1,arr2,5,4) ;
      
}