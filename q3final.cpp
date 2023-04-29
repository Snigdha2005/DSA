#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	int y;
	int arr[n];
	for(int j=0;j<n;j++){
		queue<int> qt;
		queue<int> qt1;
		while(1){
			cin>>y;
			if(y!=-1){
				qt.push(y);}
			else{
				break;}}
		int x=qt.size();
		for(int i=0;i<x;i++){
			qt1.push(qt.back());}
		for(int i=0;i<x;i++){
			if(qt1.front()!=qt.front()){
				arr[j]=0;}
			else{
				arr[j]=1;}}}
		/*stack<int> st;
		int x=qt.size();
		if(x>1){
			for(int i=0;i<x;i++){
				if(st.empty()){
					st.push(qt.front());
					qt.pop();}
				else if(st.top()==qt.front()){
					st.pop();
					qt.pop();}
				else if(st.top()!=qt.front()){
					st.push(qt.front());
					qt.pop();}}
		if(st.empty()){
			//cout<<"true";
			arr[j]=1;}
		else{
			//cout<<"false";
			arr[j]=0;}
		}
		else if(x==1){
			arr[j]=1;}}*/
	for(int i=0;i<n;i++){
		if(arr[i]){
			cout<<"true\n";}
		else{
			cout<<"false\n";}}
	return 0;}

