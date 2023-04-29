#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		char data;
		Node * next;};
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
	
Node * deleteatbeg(Node * head){
	if(head==NULL){
		return head;}
	if(head!=NULL && head->next==NULL){
		free(head);
		head=NULL;
		return head;}
	if(head!=NULL && head->next!=NULL){
		Node * temp=new Node;
		temp=head;
		head=head->next;
		free(temp);
		temp=NULL;
		return head;}
	return head;}
/*
int main(){
	int n;
	cin>>n;//user input of test cases
	for(int j=0;j<n;j++){
		string str1;
		cin>>str1;//user input of string
		string max=str1;
		string str2=str1;
		for(int i=0;i<str1.length();i++){//rotating string
			char x=str2[0];
			str2.erase(0,1);
			str2=str2+x;
			if (str2.compare(max)>0){//comparing strings
				max=str2;}}
	cout<<max<<"\n";}//printing output
	return 0;}
*/

int main(){
	int n;
	cin>>n;
	for(int j=0;j<n;j++){
		Node * head=new Node;
		Node * max=new Node;
		max=NULL;
		head=NULL;
		Node * head1=new Node;
		head1=NULL;
		string str1;
		cin>>str1;
		for(int i=0;i<str1.length();i++){
			head=insertnodeatend(head,str1[i]);
			head1=insertnodeatend(head1,str1[i]);}
		max=head;
		for(int i=0;i<str1.length()-1;i++){
			head1=insertnodeatend(head1,head1->data);
			head1=deleteatbeg(head1);
			Node * t1=new Node;
			Node * t=new Node;
			t=max;
			t1=head1;
			while(t!=NULL && t1!=NULL){
				if(t->data<t1->data){
					max=head1;
					}
				t=t->next;
				t1=t1->next;}}
			//head=head1;}
		Node * d=new Node;
		d=max;
		while(d!=NULL){
			cout<<d->data;
			d=d->next;}
		cout<<"\n";
	}return 0;}

			
			
