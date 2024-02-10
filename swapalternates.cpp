#include <iostream>
using namespace std;
void swapAlternates(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int even[8]={3,2,4,6,7,4,1,9};
    int odd[5]={2,1,3,5,6};


    swapAlternates(even,8);
    swapAlternates(odd,5);

    printArray(even,8);
    printArray(odd,5);
}