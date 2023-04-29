#include<iostream>
using namespace std;
class Node{
	public:
		char data;
		Node * next;};
class Stack{
	public:
		Node * top;
		Stack(){
			top=NULL;}
		void push(char item);
		void pop();
		void display();
		char peek();};
void Stack::push(char item){
	Node * temp=new Node;
	temp->data=item;
	temp->next=NULL;
	if(top==NULL){
		top=temp;}
	else if(top!=NULL){
		temp->next=top;
		top=temp;
	}}
void Stack::pop(){
	if(top==NULL){
		return;}
	else{
		Node * temp=new Node;
		temp=top;
		top=top->next;
		delete(temp);}}
char Stack::peek(){
	if(top!=NULL){
		return top->data;}
	else{
		return -1;}}
int main(){
	string str;
	cin>>str;
	str.erase(0,1);
	str.erase(str.length()-1,1);
	Stack st;
	bool valid=true;
	for(int i=0;i<str.length();i++){
		if(str[i]=='(' || str[i]=='{' || str[i]=='['){
			st.push(str[i]);}
		else if(str[i]==')' && st.peek()=='('){
			st.pop();}
		else if(str[i]==']' && st.peek()=='['){
			st.pop();}
		else if(str[i]=='}' && st.peek()=='{'){
			st.pop();}}
	if(st.peek()!=(char)-1){
		valid=false;}
	if(valid==true){
		cout<<"true"<<endl;}
	else{
		cout<<"false"<<endl;}
	return 0;}
		
