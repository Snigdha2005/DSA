#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
        public:
                int data;
                Node * next;};
class linkedlist{
        public:
                Node * head;
                linkedlist(){
                        head=NULL;}
                void addatbeg(int item);
                void deleteatbeg();
                int headdata();
                void display();
};
void linkedlist::addatbeg(int item){
        Node * temp=new Node;
        temp->data=item;
        temp->next=NULL;
        if(head==NULL){
                head=temp;}
        else if(head->next==NULL){
		head->next=temp;}
	else{	Node * t=head;
		while(t->next!=NULL){
			t=t->next;}
		t->next=temp;}}
                //	temp->next=head;
                //head=temp;}}
void linkedlist::deleteatbeg(){
        Node * temp=new Node;
        temp=head;
        if (head!=NULL){
                head=head->next;}
        delete temp;}
int linkedlist::headdata(){
        if(head!=NULL) 
                return head->data;
        else
                return -100000;}
void linkedlist::display(){
        if(head!=NULL){
                Node * temp=head;
                while(temp!=NULL){
                        if(temp->next!=NULL)
                                cout<<temp->data<<" ";
                        else
                                cout<<temp->data;
                        temp=temp->next;}}}
int main(){
	int n1,n2;
	cin>>n1;
	int a1[n1];
	int a2[n2];
	linkedlist lt1;
	linkedlist lt2;
	linkedlist lt;
	for(int i=0;i<n1;i++){
		cin>>a1[i];
		lt1.addatbeg(a1[i]);}
	cin>>n2;
	for(int i=0;i<n2;i++){
		cin>>a2[i];
		lt2.addatbeg(a2[i]);}
/*	for(int i=0;i<n1+n2;i++){
		if(lt1.headdata()==-1 && lt2.headdata()==-1){
			break;}
		if(std::max(lt1.headdata(),lt2.headdata())){
			lt.addatbeg(lt1.headdata());
			lt1.deleteatbeg();}
		else if(lt1.headdata()==lt2.headdata()){
				lt.addatbeg(lt1.headdata());
				lt.addatbeg(lt2.headdata());
				lt1.deleteatbeg();
				lt2.deleteatbeg();}
		else{
			lt.addatbeg(lt2.headdata());
			lt2.deleteatbeg();}}*/
	int p=std::min(n1,n2);
	cout<<p<<endl;
	for(int i=0;i<n1+n2;i++){
		if(lt1.headdata()!=-100000 && lt2.headdata()!=-100000){
		int l=std::min(lt1.headdata(),lt2.headdata());
		lt.addatbeg(l);
		if(l==lt1.headdata()){
			lt1.deleteatbeg();}
		if(l==lt2.headdata()){
			lt2.deleteatbeg();}}
		else if(lt1.headdata()==-100000){
			lt.addatbeg(lt2.headdata());
			lt2.deleteatbeg();}
		else if(lt2.headdata()==-100000){
			lt.addatbeg(lt1.headdata());
			lt1.deleteatbeg();}}
	/*if(p==n1){
		cout<<n2-n1<<endl;
		for(int i=n1;i<n2-n1;i++){
			lt.addatbeg(lt2.headdata());}}
	if(p==n2){
		cout<<n1-n2<<endl;
		for(int i=n2;i<n1-n2;i++){
			lt.addatbeg(lt1.headdata());}}
	*/lt.display();
	cout<<endl;
	return 0;}

