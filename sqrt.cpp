#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int l,int r,int m){
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==m){
			return mid;}
		else if(a[mid]>m){
			r=mid-1;
			if(a[mid-1]<m){
				return mid-1;}
		}
		else{
			l=mid+1;
			if(a[mid+1]>m){
				return mid;}}}
	return -1;}
int main(){
	int n;
	cin>>n;
	int p[n];
	for(int i=0;i<n;i++){
		p[i]=i*i;}
	cout<<binarysearch(p,0,n-1,n)<<endl;
	return 0;}
