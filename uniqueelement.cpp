#include<iostream>
using namespace std;

int uniqueElement(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[6]={1,2,2,1,1,3};
    int a=uniqueElement(arr,6);
    cout<<a<<endl;
}