#include<iostream>
using namespace std;
int main(){
	string str1;
	cin>>str1;
	int h[str1.length()];
	int m=26;
	for( int i=0;i<str1.length();i++){
		h[i]=(int)str1[i]%m;}
	int t[m];
	for(int i=0;i<m;i++){
		t[i]=0;}
	for(int i=0;i<str1.length();i++){
		int x=h[i];
		if (t[x]==0){
			t[x]=1;}
		else{
			t[x]=-1;}}
	for(int i=0;i<str1.length();i++){
		int x=h[i];
		if(t[x]==1){
			cout<<i<<endl;
			break;}
		if(i==str1.length()-1 && t[x]!=1){
			cout<<"-1"<<endl;}}}
