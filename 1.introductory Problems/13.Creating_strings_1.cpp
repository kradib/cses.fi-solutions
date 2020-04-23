/*
Given a string, your task is to generate all different strings that can be created using its characters.

Input

The only input line has a string of length n. Each character is between a–z.

Output

First print an integer k: the number of strings. Then print k lines: the strings in alphabetical order.

Constraints

    1≤n≤8

*/


#include <bits/stdc++.h>
using namespace std;

int vis[8];
set<string> st;

void generateStrings(int index, string cur,string s, int n){

	if(index==n){
		if(st.find(cur)==st.end()){
			st.insert(cur);
		}
		return;
	}

	for(int i=0;i<s.length();i++){
		if(vis[i]==0){
			vis[i]=1;
			generateStrings(index+1,cur+string(1,s[i]),s,n);
			vis[i]=0;
		}
	}


}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;


	
	for(int i=0;i<8;i++)
		vis[i]=0;

	generateStrings(0,"",s,s.length());
	cout<<st.size()<<endl;
	for(auto it=st.begin();it!=st.end();it++){
		cout<<*it<<endl;
	}
	return 0;

}