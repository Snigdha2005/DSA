#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

//creation of Node class
class Node{
	public:
		int data;
		Node * next;};

//function definition insertnodeatend
Node * insertnodeatend(Node * head, int value){
	 Node * newNode= new Node;
        newNode->data=value;
        newNode->next=NULL;
        if (head==NULL){
                head=newNode;
                return head;}
        else{
                Node * temp=new Node;
                temp=head;
                while(temp->next!=NULL){
                        temp=temp->next;}
                temp->next=newNode;
                temp=head;
                return temp;}}

//function definition insertnode
Node * insertnode(Node * mainhead, Node * head){
	if(mainhead==NULL){
		mainhead=head;
		return mainhead;}
	else{
		Node * temp=new Node;
		temp=mainhead;
		while(temp->next!=NULL){
			temp=temp->next;}
		temp->next=head;
		temp=mainhead;
		return temp;}}

//main function
int main(){
	int k;
	cin>>k;
	Node * a[k];
	Node * b[k];
	int ay[k];
	int sumy=0;
	Node * mainhead=new Node;
	mainhead=NULL;
	for (int i=0;i<k;i++){
		int y;
		cin>>y;
		int arr[y];
		Node * head=new Node;
		head=NULL;
		for(int j=0;j<y;j++){
			cin>>arr[j];
			head=insertnodeatend(head,arr[j]);}
		//mainhead=insertnode(mainhead,head);
		a[i]=head;
		b[i]=head;
		ay[i]=y;
		sumy=sumy+y;}
	int alli[sumy];
	int l=0;
	for( int j=0;j<k;j++){
		for(int i=0;i<ay[j];i++){
			alli[l]=a[j]->data;
			a[j]=a[j]->next;
			l++;}}
	sort(alli,alli+sumy);
	for(int i=0;i<sumy;i++){
		if(i!=sumy-1){
			cout<<alli[i]<<"-";}
		else
			cout<<alli[i]<<"\n";}
	return 0;}
