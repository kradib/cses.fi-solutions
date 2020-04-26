#include <bits/stdc++.h>
using namespace std;

#define lli long long int

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	map<lli, int> mymap;
	while(n--){
		lli item;
		cin>>item;
		mymap[item]++;
	}
	cout<<mymap.size();
}