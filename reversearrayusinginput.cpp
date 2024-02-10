#include <iostream>
using namespace std;
int reverseArray(int arr[],int n,int m){
     int s=m+1;
    int e=n-1;
    while(s<e){
        swap(arr[s], arr[e]);
        s++;e--;
    } 
}

int main(){
    int arr1[7]={1, 2, 3, 4, 5, 6,7};

    reverseArray(arr1,7,3);
    for(auto i:arr1){
        cout<<i<<" ";
    }

}