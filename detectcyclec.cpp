#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node * next;};
class linkedlist{
	public:
		Node * head, *tail;
		linkedlist(){
			head=NULL;
			tail=NULL;}};
void insertnodeatend(linkedlist lst,int value){
	Node * newNode= new Node;
	newNode->data=value;
	newNode->next=NULL;
	if (head==NULL){
		head=newNode;
		tail=head;
		return;}
	else{
		tail->next=newNode;
		tail=tail->next;
		return;}}
bool detectloop(linkedlist lst){
	Node * t1=head;
	Node * t2=head;
	while(t1!=NULL && t2!=NULL && t2->next!=NULL){
		t1=t1->next;
		t2=t2->next->next;
		if(t1==t2)
			return 1;}
	return 0;}
int main(){
	linkedlist lst;
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		insertnodeatend(lst,arr[i]);}
	int x;
	cin>>x;
	Node * t3=head;
	for(int j=1;j<=x;j++){
		t3=t3->next;}
	tail->next=t3;
	if (detectloop(lst))
		cout<<"True";
	else
		cout<<"False";
	return 0;}
