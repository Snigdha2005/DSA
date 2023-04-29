#include<iostream>
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
	else{
		temp->next=head;
		head=temp;}}
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
		return -1;}
void linkedlist::display(){
	if(head!=NULL){
		Node * temp=head;
		while(temp!=NULL){
			if(temp->next!=NULL)
				cout<<temp->data<<",";
			else
				cout<<temp->data;
			temp=temp->next;}}}

int main(){
	linkedlist lt1;
	linkedlist lt2;
	linkedlist lt;
	string str1;
	string str2;
	cin>>str1;
	int s1;
	for(int i=0;i<str1.length();i++){
		int x;
		if(str1[i]=='='){
			x=i;}
		if(i>x && (str1[i]!='[' || str1[i]!=',' || str1[i]!=']')){
		       lt1.addatbeg((int)str1[i]);
			s1++;}}	
	cin>>str2;
	int s2;
	for(int i=0;i<str2.length();i++){
		int x;
		if(str2[i]=='='){
			x=i;}
		if(i>x && (str2[i]!='[' || str2[i]!=',' || str2[i]!=']')){
		       lt2.addatbeg((int)str2[i]);
			s2++;}}
	lt1.display();
	lt2.display();
	for(int i=0;i<s1+s2;i++){
		while(lt1.headdata()>lt2.headdata()){
			lt.addatbeg(lt2.headdata());
			lt2.deleteatbeg();}	
		while(lt1.headdata()<lt2.headdata()){
			lt.addatbeg(lt1.headdata());
			lt1.deleteatbeg();}
		}
	cout<<"[";
	lt.display();
	cout<<"]\n";
	return 0;}

