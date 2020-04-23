#include <bits/stdc++.h>
using namespace std;

bool myrecur(int index, int n, int arr[], int vis[]){
    if(index==n)
    return true;

    for(int i=1;i<=n;i++){
        if(vis[i-1]==0 && abs(i-arr[index-1])>1){
            vis[i-1]=1;
            arr[index]=i;
            //cout<<"arr["<<index<<"]"<<"= "<<i<<endl;
            if(myrecur(index+1,n,arr,vis))
            return true;
            //cout<<"backtracking...\n";
            vis[i-1]=0;
            arr[index]=0;
        }
    }
    return false;

}

int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    int vis[n]={0};
    bool flag=false;
    for(int i=1;i<=n;i++){
        arr[0]=i;
        vis[i-1]=1;
        if(myrecur(1,n,arr,vis)){
            flag=true;
            break;
        }
        
        vis[i-1]=0;
    }
    if(!flag){
        cout<<"NO SOLUTION";
        return 0;
    }
    for(auto i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}