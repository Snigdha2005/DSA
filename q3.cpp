#include<iostream>
using namespace std;
//creating class Node
class Node{
	public:
		int data;
		Node * next;};

//function definition insertnodeatend to insert node at end of linked list
Node * insertnodeatend(Node * head,int value){
	Node * newNode=new Node;
	newNode->data=value;
	newNode->next=NULL;
	if (head==NULL){//if head null
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

//function definition recreverse to reverse the linked list using recursion
Node * recreverse(Node * head){
	if (head && head->next){
		Node * temp=new Node;
		temp=head;
		Node * t=new Node;
		if(head->next){
			head=recreverse(head->next);//recursive call
			t=head;
			while(t->next)
				t=t->next;
			t->next=temp;
			temp->next=NULL;}}
	return head;}

//function definition reverse to create a newlinked list using data from input linked list
Node * reverse(Node * head,int n){
	Node * revhead=new Node;
	revhead=NULL;
	int a[n];
	Node * temp= new Node;
	temp=head;
	int i=0;
	while(temp!=NULL){
		a[i]=temp->data;//reading into array
		i++;}
	for(int j=n-1;j>=0;j--){//inserting nodes
		revhead=insertnodeatend(revhead,a[j]);}
	return revhead;}

//function definition reverse1 to reverse the linked list using iteration
Node * reverse1(Node * headref){
	Node * p=new Node;
	p=NULL;
	Node * c=new Node;
	c=headref;
	Node * n=new Node;
	while(c!=NULL){
		n=c->next;
		c->next=p;
		p=c;
		c=n;}
	headref=p;
	return headref;}
	
//main function
int main(){
	Node * head=new Node;
	head=NULL;
	int n;
	cin>>n;//user input of number of nodes
	int y;
	int arr[n];
	for(int i=0;i<n;i++){
		while(1){
			cin>>y;//input of elements
			if(y!=-1){
				head=insertnodeatend(head,y);}//inserting nodes
			else{break;}}
		
		Node * temp=new Node;
		temp=recreverse(head);//create a new reversed linked list
		//temp=reverse(head,n);
		//temp=reverse1(head);
		bool x=1;
		Node * t1=new Node;
		Node * t2=new Node;
		t1=head;
		t2=temp;
		while(t1!=NULL && t2!=NULL){//traversing through each linked list
			if(t1->data!=t2->data)//checking if not equal
				x=0;
			t1=t1->next;
			t2=t2->next;}
		if (x)//printing output
			arr[i]=1;
		else
			arr[i]=0;}
	for(int i=0;i<n;i++){
		if(arr[i])
			cout<<"true\n";
		else
			cout<<"false\n";}
	return 0;}

