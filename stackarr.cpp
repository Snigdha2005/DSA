#include<iostream>
using namespace std;

#define MAX 10
class Stack{
	int top;
	public:
		int arr[MAX];
		Stack(){
			top=-1;}
		void push(int item);
		int pop();
		int peek();
};
void Stack::push(int item){
	if (top>=(MAX-1)){
		cout<<"stack overflow\n";}
	else{
		arr[++top]=item;
		cout<<"element added"<<item<<"\n";}}

int Stack::pop(){
	if(top<0){
		cout<<"stack underflow\n";
		return -1;}
	else{
		int item=arr[top--];
		return item;}
}
int Stack::peek(){
	if(top<0){
		cout<<"stack overflow\n";
		return -1;
	}
	else{
		int item=arr[top];
		return item;}}

int main(){
	Stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	cout<<st.pop();
	cout<<st.peek();
	return 0;}


