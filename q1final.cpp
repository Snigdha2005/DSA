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
                int  headdata();
                void display();
		void reverse1();
		int head1();
};
void linkedlist::addatbeg(int item){
        Node * temp=new Node;
        temp->data=item;
        temp->next=NULL;
        if(head==NULL){
                head=temp;}
        else if(head->next=NULL){
		head->next=temp;}
	else{
		Node * t=head;
		while(t->next!=NULL)
			t=t->next;
		t->next=temp;}}
                //temp->next=head;
               // head=temp;}}
int linkedlist::head1(){
	return head->data;}
void linkedlist::deleteatbeg(){
        Node * temp=new Node;
        temp=head;
        if (head!=NULL){
                head=head->next;}
        delete temp;}
int  linkedlist::headdata(){
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
linkedlist  sorted(linkedlist lt1,linkedlist lt2,int slx){
	linkedlist lt;
	for(int i=0;i<slx;i++){
		if(lt1.headdata()!=-100000 && lt2.headdata()!= -100000){
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
	lt.display();
	return lt;}
	/*int p=std::min(x,y);
	int l;
	for(int i=0;i<p;i++){
		l=std::max(lt1.head1(),lt2.head1());
		lt.addatbeg(l);
		if(l==lt1.head1())
			lt1.deleteatbeg();
		if(l==lt2.head1())
			lt2.deleteatbeg();}
	if(p==x){
		for(int i=x+1;i<y-x;i++){
			lt.addatbeg(lt1.head1());
			lt1.deleteatbeg();}}
	else if(p==y){
		for(int i=y+1;i<x-y;i++){
			lt.addatbeg(lt2.head1());
			lt2.deleteatbeg();}}*/
        /*for(int i=0;i<slx;i++){
                if((int)lt1.headdata()=='\0' && (int)lt2.headdata()=='\0'){
                        break;}
                if(((int)lt1.headdata()>(int)lt2.headdata() && (int)lt1.headdata()>0 && (int)lt2.headdata()>0) || ((int)lt1.headdata()>0 && (int)lt2.headdata()<0)){
                        lt.addatbeg(lt1.headdata());
                        lt1.deleteatbeg();}
                else if(((int)lt1.headdata()==(int)lt2.headdata())){
                                lt.addatbeg(lt1.headdata());
                                lt.addatbeg(lt2.headdata());
                                lt1.deleteatbeg();
                                lt2.deleteatbeg();}
                else if(((int)lt2.head{
                        lt.addatbeg(lt2.headdata());
                        lt2.deleteatbeg();}}*/
	/*	if(lt1.headdata()==NULL && lt2.headdata()==NULL){
			break;}
		else if(lt1.headdata()!=NULL && lt2.headdata()!=NULL){
			int y=std::max(*(lt1.headdata()),*(lt2.headdata()));
			lt.addatbeg(y);
			if(y==*(lt1.headdata())){
				lt1.deleteatbeg();}
			if(y==*(lt2.headdata())){
				lt2.deleteatbeg();}}
		else if(lt1.headdata()==NULL && lt2.headdata()!=NULL){
			lt.addatbeg(*(lt2.headdata()));}
		else if(lt2.headdata()==NULL && lt1.headdata()!=NULL){
			lt.addatbeg(*(lt1.headdata()));}}*/
//	return lt;}
void linkedlist::reverse1(){
        Node * p=new Node;
        p=NULL;
        Node * c=new Node;
        c=head;
        Node * n=new Node;
        while(c!=NULL){
                n=c->next;
                c->next=p;
                p=c;
                c=n;}
        head=p;
        }
int main(){
	int n;
	cin>>n;
	int a[n];
	queue<int> qt;
	linkedlist arr[n];
	for(int j=0;j<n;j++){
		linkedlist lt;
		cin>>a[j];
		if(a[j]!=0){
		int y;
		for(int i=0;i<a[j];i++){
			cin>>y;
			lt.addatbeg(y);}
		arr[j]=lt;}
		else if(a[j]==0){
			qt.push(j);}}
	if(qt.size()!=n){
	linkedlist lx=arr[0];
	int slx=a[0];
	//int o;
	for(int i=1;i<n;i++){
		//linkedlist ptr;
		//o=slx;
		slx=a[i]+slx;
		lx=sorted(arr[i],lx,slx);
		//lx.reverse1();
		lx.display();
		cout<<endl;}
	//lx.reverse1();
	lx.display();
        cout<<endl;}
        return 0;}
