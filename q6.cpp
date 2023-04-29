#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class Node{
	public:
		int data;
		Node * next;};
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
/*
int main(){
	Node * heada=new Node;
	Node * headb=new Node;
	heada=NULL;
	headb=NULL;
	int m,n;
	cin>>m;
	int y;
	for(int i=0;i<m;i++){
		cin>>y;
		heada=insertnodeatend(heada,y);}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>y;
		headb=insertnodeatend(headb,y);}
	Node * tempa=new Node;
	Node * tempb=new Node;
	tempa=heada;
	tempb=headb;
	while(tempa->next!=NULL){
		int c=0;
		while(tempb->next!=NULL){
			if(tempa->data==tempb->data){
				c=1;
				tempa=tempa->next;
				tempb=tempb->next;
				while(tempa->data==tempb->data){
					c++;
					tempa=tempa->next;
					tempb=tempb->next;}
				cout<<c<<"\n";}
			else{
				tempb=tempb->next;}}
		tempa=tempa->next;
		tempb=headb;}
	return 0;}
*/
int main(){
	int m,n;
	cin>>m;
	int y;
	int a[m],b[n];
	for(int i=0;i<m;i++){
		cin>>y;
		a[i]=y;}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>y;
		b[i]=y;}
	for(int i=0;i<m;i++){
		int l=i;
		for( int j=0;j<n;j++){
			int c=0;
			int k=j;
			if(a[i]==b[j]){
				c++;
				i++;
				j++;
				while(a[i]==b[j]){
					c++;
					i++;
					j++;}
				cout<<c;}
			j=k;}
		i=l;}
	return 0;}
