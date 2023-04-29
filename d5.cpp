#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,y;
	cin>>n;
	vector<int> arr;
	for(int i=0;i<n;i++){
		cin>>y;
		arr.push_back(y);
	}
	int c=0;
	sort(arr.begin(),arr.end());
	for(int k=0;k<n-2;k++){
		int l=k+1,r=n-1;
		while(l<=r){
			if(arr[l]+arr[r]+arr[k]==0){
				c++;}
			else if(arr[l]+arr[r]+arr[k]<0){l++;}
			else{r--;}}}
	cout<<c<<endl;
	return 0;}
