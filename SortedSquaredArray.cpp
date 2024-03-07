#include<iostream>
#include<vector>
#include<bits\stdc++.h>
using namespace std;

void sortedSquaredArray(vector<int> &v){
    int left=0;
    int right=v.size()-1;
    vector<int>ans;

    while(left<=right){
        if(abs(v[left])<abs(v[right])){
            ans.push_back(v[right]*v[right]);
            right--;
        }
        else{
            ans.push_back(v[left]*v[left]);
            left++;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}


int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    sortedSquaredArray(v);
    
}

