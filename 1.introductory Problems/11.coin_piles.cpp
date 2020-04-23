#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long int sum=a+b;
        if(a==0 && b==0)
        cout<<"YES\n";
        else if(a!=0 && b!=0 && abs(a-b)<=max(a,b) && (sum)%3==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}