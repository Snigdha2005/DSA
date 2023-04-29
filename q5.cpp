#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//creation of class Node
class Node{
	public:
		char data;
		Node * next;};

//main function using arrays
/*int main(){
	string str1;
	cin>>str1;//user input of string
	char a[str1.length()];//array declaration
	for(int i=0;i<str1.length();i++){
		a[i]=str1[i];}//adding elements
	for(int i=0;i<str1.length();i++){
		if(count(a,a+str1.length(),a[i])==1){//counting occurrence of each element
			cout<<i<<"\n";//printing output
			return 0;}
		else{
			continue;}}
	cout<<"-1\n";//printing output
	return 0;
}*/

//function definition insertnodeatend to insert a node at the end of linked list
Node * insertnodeatend(Node * head,char value){
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
//function definition search to search for the number of times a given value appears
int search(Node * head,char value){
	Node * current=new Node;
	int c=0;
	current=head;
	while(current!=NULL){
		if(current->data==value){//counting each occurrence in linked list
			c++;}
		current=current->next;}
	return c;}

//main function using linked list
int main(){
	string str1;
	cin>>str1;//user input of string
	Node * head=new Node;
	head=NULL;
	for( int i=0;i<str1.length();i++){//linked list elements addition
		head=insertnodeatend(head,str1[i]);}
	Node * temp=new Node;
	Node * temp1=new Node;
	temp=head;
	//temp1=head->next;
	int y=0;
	while(temp->next!=NULL){//traversing list
		/*int c=0;
		while(temp1!=NULL){
			if(temp->data==temp1->data){
				c++;}
				temp1=temp1->next;}*/
		int c=search(head,temp->data);//function call
		if(c==1){//printing output
			cout<<y<<"\n";
			return 0;}
		y++;
		temp=temp->next;}
	cout<<"-1\n";//printing output
	return 0;}

