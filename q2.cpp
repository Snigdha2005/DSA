#include<iostream>
using namespace std;
//creating class Node
class Node{
	public:
		int data;
		Node * next;};

//function definition insertnodeatend to insert node at end of linked list
Node * insertnodeatend(Node * head,int value){
	Node * newNode= new Node;
	newNode->data=value;
	newNode->next=NULL;
	if (head==NULL){//if head is null
		head=newNode;
		return head;}
	else{//if head not null
		Node * temp=new Node;
		temp=head;
		while(temp->next!=NULL){
			temp=temp->next;}
		temp->next=newNode;
		temp=head;
		return temp;}}

//function definition to detect cycle using Floyd's cycle detection algorithm
bool detectloop(Node * head){
	Node * t1=head;
	Node * t2=head;
	while(t1!=NULL && t2!=NULL && t2->next!=NULL){//traversing through list
		t1=t1->next;
		t2=t2->next->next;
		if(t1==t2)
			return 1;}
	return 0;}

//main function
int main(){
	Node * head=NULL;
	int n;
	cin>>n;//user input of number of nodes
	int y;
	for(int i=0;i<n;i++){
		cin>>y;//user input of elements
		head=insertnodeatend(head,y);}//inserting nodes to linked list
	int x;
	cin>>x;//user input of base node to create cycle
	Node * t3=new Node;
	Node * t4=new Node;
	t3=head;
	t4=head;
	if(x>0){
	for(int j=1;j<=x;j++){
		t3=t3->next;}//to get pointer to at the given node position
	while(t4->next!=NULL){
		t4=t4->next;}//to get pointer to the last node
	t4->next=t3;//update the last node next pointer
	if(detectloop(head))//function call and printing output
		cout<<"True\n";
	else
		cout<<"False\n";}
	else{
		cout<<"False\n";}
	return 0;}
