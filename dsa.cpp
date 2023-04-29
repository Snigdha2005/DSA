#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,y;
	cin>>n;
	vector<int> arr;int a[n];
	for(int i=0;i<n;i++){
		cin>>y;
		arr.push_back(y);
		a[i]=y;
	}
	sort(a,a+n);
	int c=0;
	for(int i=0;i<n;i++){
		auto it=find(arr.begin(),arr.end(),a[i]);
		int x;
		x=it-arr.begin();
		c=c+x;
		arr.erase(it);
	}
	cout<<c<<endl;
	return 0;
}
