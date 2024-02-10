#include<iostream>
using namespace std;


int main(){
    int size,key;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    cin>>key;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The array is:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"The key is present"<<endl;
            
        }
        
    }

}