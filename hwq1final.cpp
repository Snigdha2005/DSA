#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	queue<int> qt;
	int r[n];
	queue<int> lt;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		qt.push(arr[i]);}
	int y=qt.size();
	stack<int> st;
	for(int i=0;i<y;i++){
		r[i]=-1;}
	/*for(int i=0;i<y;i++){
		if(st.empty()){
			st.push(qt.front());
			qt.pop();}
		else if(st.top()>qt.front()){
			r[i-1]=i;
			//qt.pop();
			st.pop();
			st.push(qt.front());
			qt.pop();
			}
		while(st.top()<qt.front()){
			st.push(qt.front());
			qt.pop();
			i++;}}
*/
	int i=0;
	while(i<y){
		while(st.empty() || st.top()<=arr[i]){
			st.push(i);
			i++;}
		r[i-1]=i;
		//st.pop();
		st.push(arr[i]);
		i--;
		}
	for(int i=0;i<n;i++){
		cout<<r[i]<<" ";}
	return 0;}


