#include<iostream>
using namespace std;
//creating class Node
class Node{
	public:
		char data;
		Node * next;};
//creating class Queue
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
		char rotation();};
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
//Queue method rotation to rotate the queue
char Queue::rotation(){
	Node * temp=head;
	Node * temp2=head->next;
	while(true){
		if(temp->data<temp2->data){
			char x=head->data;
			return x;}
		//else{temp2=temp2->next;
		temp=temp->next;}//}
	return -1;}
	/*char max=temp->data;
	int s;
	while(temp!=NULL){
		if(max<temp->next->data){
			max=temp->next->data;
			s++;}
		temp=temp->next;}
	return max;*/
	
//main function
int main(){
	int n;
	cin>>n;//user input of number of test cases
	for( int j=0;j<n;j++){
		Queue qt;
		string str1;
		cin>>str1;//user input of string
		for(int i=0;i<str1.length();i++){//adding elements toQueue
			qt.enqueue(str1[i]);}
		while(qt.rotation()!=(char)-1){
			qt.enqueue(qt.rotation());
			qt.dequeue();}
	//	for(int i=0;i<str1.length();i++){
	//		if(qt.rotation()!=(char)-1){
	//			qt.enqueue(qt.rotation());
	//			qt.dequeue();}}
		qt.display();
		cout<<"\n";}
	return 0;}
