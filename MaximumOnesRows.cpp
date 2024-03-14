#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maximumOnesRow(vector<vector<int>>&V){
    int maxOnes=INT_MIN;
    int maxOnesRows=0;
    int col=V[0].size();
    for(int i=0;i<V.size();i++){
        for(int j=0;j<V[i].size();j++){
            if(V[i][j]==1){
                int numberOfOnes=col-j;
                if(numberOfOnes>maxOnes){
                    maxOnes=numberOfOnes;
                    maxOnesRows=i;
                }
                break;
            }
        }
    }
    return maxOnesRows;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>vec(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res=maximumOnesRow(vec);
    cout<<res<<endl;
}