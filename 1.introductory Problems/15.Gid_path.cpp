#include <bits/stdc++.h>
using namespace std;
#define lli long long int 
lli countv;
int vis[64][64];
void totalPath(int r, int c, int index, string s){

	if(index==s.length() && r==7 && c==0){
		countv++;
		return;
	}
	vis[r][c]=1;
	//cout<<"hi1\n";
	if(s[index]=='?'){
	    //cout<<"hi2\n";
		if(r+1<8 && !vis[r+1][c]){ //D move
			totalPath(r+1,c,index+1,s);
		}
		if(r-1>=0 && !vis[r-1][c]){//U move
			totalPath(r-1,c,index+1,s);
		}
		if(c+1<8 && !vis[r][c+1]){//R move
			totalPath(r,c+1,index+1,s);
		}
		if(c-1>=0 && !vis[r][c-1]){//L move
			totalPath(r,c-1,index+1,s);	
		}
		
	}
	else{
	    //cout<<"hi3\n";
		if(s[index]=='D'){
			if(r+1<8 && !vis[r+1][c]){
				totalPath(r+1,c,index+1,s);
			}
			else{
				vis[r][c]=0;
				return;
			}
		} 
		else if(s[index]=='U'){
			if(r-1>=0 && !vis[r-1][c]){
				totalPath(r-1,c,index+1,s);
			}
			else{
				vis[r][c]=0;
				return;
			}
		}
		else if(s[index]=='R'){
			if(c+1<8 && !vis[r][c+1]){
				totalPath(r,c+1,index+1,s);
			}
			else{
				vis[r][c]=0;
				return;
			} 
		}
		else if(s[index]=='L'){
			if(c-1>=0 && !vis[r][c-1]){
				totalPath(r,c-1,index+1,s);	
			}
			else{
				vis[r][c]=0;
				return;
			}
		} 
	}
	vis[r][c]=0;
	return;
	

}


int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	countv=0;
	string s;
	//cin>>s;
	for(int i=0;i<=63;i++){
	    for(int j=0;j<=63;j++){
	        vis[i][j]=0;
	    }
	}
	s="??????R??????U??????????????????????????LD????D?";
	totalPath(0,0,0,s);
	cout<<countv;
}