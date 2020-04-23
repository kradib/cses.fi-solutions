#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        lli a,b;
        cin>>a>>b;
        lli sum=a+b;
        if(a==0 && b==0)
        cout<<"YES\n";
        else if(a!=0 && b!=0 && abs(a-b)<=min(a,b) && (sum)%3==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}