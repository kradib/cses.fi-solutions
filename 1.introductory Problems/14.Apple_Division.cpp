#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
lli arr[20];

lli llmin(lli a, lli b){
	if(a<=b)
		return a;
	return b;
}


lli minimumDiff(int index, lli sum1, lli sum2, int n){

	if(index==n)
		return llabs(sum1-sum2);

	return llmin(minimumDiff(index+1,sum1+arr[index],sum2-arr[index],n),minimumDiff(index+1,sum1,sum2,n));

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	lli sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}

	cout<<minimumDiff(0,0,sum,n);


}