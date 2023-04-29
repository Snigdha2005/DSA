#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node * next;};
class linkedlist{
	public:
		Node * head=new Node;
		linkedlist(){
			head=NULL;}
		void addatbeg(int item);
		void deleteatbeg();
		void display();};
void linkedlist::addatbeg(int item){
	Node * temp=new Node;
	temp->data=item;
	temp->next=NULL;
	if(head==NULL){
		head=temp;}
	else{
		temp->next=head;
		head=temp;}}
void linkedlist::deleteatbeg(){
	Node * temp=new Node;
	temp=head;
	if(head!=NULL){
		head=head->next;}
	delete temp;
}
void linkedlist::display(){
	Node * temp=new Node;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	linkedlist lte;
	linkedlist lto;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i%==0){
			lto.addatbeg(a[i]);}
		else{
			lte.addatbeg(a[i]);}

