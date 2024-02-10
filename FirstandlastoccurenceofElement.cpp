#include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
             ans=mid;
            end=mid-1;
        }
       else if(key>mid){
             start=mid+1;

        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}
int lastOccurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
             ans=mid;
            start=mid+1;
        }
       else if(key>mid){
             start=mid+1;

        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}
int main( ){
    int even[8]={0,0,1,1,2,2,2,2};
    int odd[5]={1,3,3,5,1};
    
    
    cout<<firstOccurence(odd,5,3)<<endl;
   cout<<lastOccurence(odd,5,3)<<endl;


}