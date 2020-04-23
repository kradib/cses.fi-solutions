#include <bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;

	map<char,int> mymap;

	for(int i=0;i<s.length();i++){
		mymap[s[i]]++;
	}
	if(s.length()%2==0){
		for(auto it=mymap.begin();it!=mymap.end();it++){
			if(it->second%2==1){
				cout<<"NO SOLUTION";
				return 0;
			}
		}
		string start="";
		string end="";
		for(auto it=mymap.begin();it!=mymap.end();it++){
			start+=string(it->second/2,it->first);
			end=string(it->second/2,it->first)+end;
		}
		cout<<start+end;
	}
	else{
		int count=0;
		for(auto it=mymap.begin();it!=mymap.end();it++){
			if(it->second%2==1)
				count++;
		}
		if(count>1){
			cout<<"NO SOLUTION";
			return 0;
		}
		else{
			char mid;
			string start="",end="";
			for(auto it=mymap.begin();it!=mymap.end();it++){
				if(it->second%2==1)
					mid=it->first;
				start+=string(it->second/2,it->first);
				end=string(it->second/2,it->first)+end;
			}
			cout<<start+string(1,mid)+end;
		}
	}
	return 0;

}