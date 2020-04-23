#include <bits/stdc++.h>
using namespace std;

bool myrecur(int index, int n,int sum1,int sum2,vector<int> &result){

    if(sum1==sum2)
    return true;
    if(index==n)
    return false;

    if(myrecur(index+1,n,sum1,sum2,result))
    return true;
    result.push_back(index+1);
    if(myrecur(index+1,n,sum1+index+1,sum2-index-1,result))
    return true;
    result.pop_back();

    return false;


}
int main(){
    int n;
    cin>>n;
    long long int sum=(n)*(n+1)/2;
    if(sum%2==1){
        cout<<"NO";
        return 0;
    }
    else{
        vector<int> elements;
        int vis[n]={0};
        myrecur(0,n,0,sum,elements);
        cout<<elements.size()<<endl;
        for(auto i:elements){
            vis[i-1]=1;
            cout<<i<<" ";
        }
        cout<<endl<<n-elements.size()<<endl;
        for(int j=1;j<=n;j++){
           if(vis[j-1]==0) 
            cout<<j<<" ";
        }
    }
    return 0;
}