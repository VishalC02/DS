#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    cout<<"Enter value:";
    int x;
    cin>>x;
     
    int occurence=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurence=i;
        }
    }
    cout<<occurence<<endl;

    int n=v.size()-1;
    int occurence1=-1;
    for(int i=n;i>=0;i--){
        if(v[i]==x){
            occurence1=i;
            break;
        }
    }
    cout<<occurence1<<endl;
}