#include<iostream>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
//stock max profit if sell after l days
/*int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];}
	int l;
	cin>>l;
	int maxp=0;
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		if(st.empty() || a[st.top()]<=a[i]){
			st.push(i);}}
	for(int i=0;i<n-l;i++){
		if(st.top()-i>l){
			if(maxp<a[st.top()]-a[i]){
				maxp=a[st.top()]-a[i];
				}}
		else if(st.top()-i==l){
			if(maxp<a[st.top()]-a[i]){
				maxp=a[st.top()]-a[i];
			}
			st.pop();}
		else if(st.top()-i<l){
			st.pop();}}
	cout<<maxp<<endl;
	return 0;}
*/
//stock max profit if sell before l days
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];}
	int l;
	cin>>l;
	int maxp=0;
	stack<int> st;
	for(int i=n-1;i>=0;i--){
		if(st.empty() || a[st.top()]<=a[i]){
			st.push(i);}}
	for(int i=0;i<n-1;i++){
		if(st.top()-i<=l && (st.top()-i)!=0){
			if(maxp<a[st.top()]-a[i]){
				maxp=a[st.top()]-a[i];
				}}
		else if(st.top()-i==0){
			st.pop();}
		}
	cout<<maxp<<endl;
	return 0;}
