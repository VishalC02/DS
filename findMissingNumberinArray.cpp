#include<iostream>
using namespace std;
int findMissingEle(int arr[],int n){
   int sum=n*(n+1)/2;
   int s2=0;
   for(int i=0;i<n;i++){
         s2=s2+arr[i];
   }
   return (sum-s2);
}


int main(){
    int arr[6]={1,2,3,5,6};
    int a=findMissingEle(arr,6);
    cout<<a<<endl;
    
}