#include<iostream>
using namespace std;
//creating class Node
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
                char peek();
                void display();};
void Stack::push(char item){
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

char Stack::peek(){
        if(top==NULL){
                //cout<<"stack underflow\n";
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
class Queue{
        Node * head;
        Node * tail;
        public:
                Queue(){
                        head=tail=NULL;}
                //Queue class methods
                void enqueue(char item);
                void dequeue();
                void display();
                char rotation();
		char head_data();};
char Queue::head_data(){
	return head->data;}
//Queue method enqueue Last in Last out
void Queue::enqueue(char item){
        Node * newNode=new Node;
        newNode->data=item;
        newNode->next=NULL;
        if(head==NULL){
                head=tail=newNode;}
        else{
                tail->next=newNode;
                tail=newNode;}}
//Queue method dequeue First in First out
void Queue::dequeue(){
        if(head==NULL){
                cout<<"Queue underflow\n";}
        Node * temp=head;
        if(head==tail){
                head=tail=NULL;}
        else{
                head=head->next;}
        delete temp;}
//Queue method display to display all elements in the queue
void Queue::display(){
        if(head==NULL){
                cout<<"Queue underflow\n";}
        Node * temp=head;
        while(temp!=NULL){
                cout<<temp->data;
                temp=temp->next;}}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		Stack st;
		string str;
		cin>>str;
		for(int j=0;j<str.length();j++){
			if(st.peek()==(char)-1){
				st.push(str[j]);}
			else if(st.peek()!=(char)-1 && st.peek()<str[j]){
				st.pop();
				st.push(str[j]);}}
		char x=st.peek();
		Queue qt;
		for(int j=0;j<str.length();j++){
			qt.enqueue(str[j]);}
		while(qt.head_data()!=x){
			qt.enqueue(qt.head_data());
			qt.dequeue();}
		qt.display();
		cout<<endl;}
	return 0;}
