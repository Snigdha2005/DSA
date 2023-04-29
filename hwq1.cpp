#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define MAX 1000
class Node{
	public:
		int data;
		Node * next;};
class Stack{
        int top;
        public:
                int arr[MAX];
                Stack(){
                        top=-1;}
                void push(int item);
                int pop();
                int peek();
		int top_bef();
};
void Stack::push(int item){
        if (top>=(MAX-1)){
                //cout<<"stack overflow\n";}
}
        else{
                arr[++top]=item;
           //     cout<<"element added"<<item<<"\n";}}
		}}
int Stack::pop(){
        if(top<0){
                //cout<<"stack underflow\n";
                return -1;}
        else{
                int item=arr[top--];
                return item;}
}
int Stack::peek(){
        if(top<0){
                //cout<<"stack overflow\n";
                return -1;
        }
        else{
                int item=arr[top];
                return item;}}
int Stack::top_bef(){
	if(top<0){
		cout<<"stack underflow\n";
		return -1;}
	else{
		return arr[top-1];}}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for( int j=0;j<n;j++){
		cin>>arr[j];}
	//int i=0,top=0;
	int r[n];
	int l[n];
	Stack st;
	for(int i=0;i<n;i++){
		r[i]=-1;
		l[i]=-1;}
	/*while(i<n){
		while(top==0 || st.top_bef()<arr[i] && top>1){
			st.push(i);}
		r[top-1]=i;
		top--;}
	i=n-1;top=n-1;
	Stack st1;
	while(i<n){
		while(top==0 || st1.top_bef()<arr[i] && top>1){
			st1.push(i);}
		l[top-1]=i;
		top--;}*/
	/*for(int i=0;i<n;i++){
		if(st.peek()==-1){
			st.push(arr[i]);}
		else if(st.peek()>arr[i]){
			r[i-1]=i;
			st.pop();
			st.push(arr[i]);}
		else if(st.peek()<arr[i]){
			st.push(arr[i]);
			i++;}}
	Stack st1;
	for(int i=n-1;i>-1;i--){
		if(st1.peek()==-1){
			st1.push(arr[i]);}
		else if(st1.peek()>arr[i]){
			l[i+1]=i;
			st1.pop();
			st1.push(arr[i]);}
		else if(st1.peek()<arr[i]){
			st1.push(arr[i]);
			i++;}}*/
	Stack st1;
	int i=0;
	int t=0;
	while(i<n){
	while(t==0 || st1.peek()<arr[i] && t>1)
		st1.push(arr[i]);
	r[t-1]=i;
	t--;}
	for(int i=0;i<n;i++){
		cout<<r[i]<<" ";}
	cout<<endl;
	//for(int i=0;i<n;i++){
	//	cout<<l[i]<<" ";
	//}
	cout<<endl;
	int area[n];
	for(int i=0;i<n;i++){
		area[i]=arr[i]*(r[i]-l[i]-1);}
	int max=area[0];
	for(int i=0;i<n;i++){
		max=std::max(arr[i],max);}
	if(max>=0){
		cout<<max<<endl;}
	else{
		cout<<-max<<endl;}
	return 0;}
