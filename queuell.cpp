#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node * next;};
class Queue{
	Node * head;
	Node * tail;
	public:
		Queue(){
			head=tail=NULL;}
		void enqueue(int item);
		void dequeue();};
void Queue::enqueue(int item){
	Node * temp=new Node;
	temp->data=item;
	if(head==NULL && tail==NULL){
		head=temp;
		tail=temp;
		temp->next=NULL;
		cout<<"element added "<<item<<endl;}
	else{
		temp->next=NULL;
		tail->next=temp;
		tail=temp;
		cout<<"element added "<<item<<endl;}}
void Queue::dequeue(){
	Node * temp=new Node;
	if(head==NULL){
		cout<<"queue underflow\n";}
	else{
		temp=head;
		int item=temp->data;
		head=head->next;
		delete temp;
		cout<<"element deleted "<<item<<endl;}}

int main(){
	Queue qt;
	qt.dequeue();
	qt.enqueue(10);
	qt.enqueue(20);
	qt.enqueue(30);
	qt.dequeue();
	qt.dequeue();
	qt.dequeue();
	qt.dequeue();
}
		
