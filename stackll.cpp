#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node * next;};
class Stack{
	public:
		Node * top;
		Stack(){
			top=NULL;}
		void push(int item);
		void pop();
		int peek();
		void display();};
void Stack::push(int item){
	Node * temp=new Node;
	temp->data=item;
	if(top==NULL){
		temp->next=NULL;}
	else{
		temp->next=top;
	}
	top=temp;}

void Stack::pop(){
	if (top==NULL){
		cout<<"stack underflow\n";}
	else{
		Node * temp=new Node;
		temp=top;
		top=top->next;
		delete temp;}}

int Stack::peek(){
	if(top==NULL){
		cout<<"stack underflow\n";
		return -1;
	}
	else{
		return top->data;}}
void Stack::display(){
	if(top==NULL){
		cout<<"stack underflow\n";
	}
	else{
		Node * temp=new Node;
		temp=top;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;}}}

int main(){
	Stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.pop();
	st.display();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.display();}
