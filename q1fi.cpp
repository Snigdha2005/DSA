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
        else{   Node * t=head;
                while(t->next!=NULL){
                        t=t->next;}
                t->next=temp;}}
                //      temp->next=head;
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
                return -10000;}
void linkedlist::display(){
        if(head!=NULL){
                Node * temp=head;
                while(temp!=NULL){
                        if(temp->next!=NULL)
                                cout<<temp->data<<" ";
                        else
                                cout<<temp->data;
                        temp=temp->next;}}}
/*int main(){
	int k;
	cin>>k;
	int n[k];
	linkedlist all[k];
        linkedlist lt1;
       	linkedlist lt2;
	for(int j=0;j<k;j++){	
       		cin>>n[j];
        	int a1[j];
        	linkedlist lt1;
        	for(int i=0;i<n[j];i++){
                	 cin>>a1[i];
               		 lt1.addatbeg(a1[i]);}
	all[j]=lt1;}
	int sm=0;
	linkedlist lt=all[0];
	for(int j=1;j<k;j++){
		sm=n[j]+sm;
        	for(int i=0;i<sm;i++){
			lt2=all[j];
                	if(lt.headdata()!=-100000 && lt2.headdata()!=-100000){
                		int l=std::min(lt.headdata(),lt2.headdata());
                		lt.addatbeg(l);
	                	if(l==lt.headdata()){
        	                	lt.deleteatbeg();}
  	              		if(l==lt2.headdata()){
        	                	lt2.deleteatbeg();}}
               		 else if(lt.headdata()==-100000){
                        	lt.addatbeg(lt2.headdata());
                       		lt2.deleteatbeg();}
             		 else if(lt2.headdata()==-100000){
                        	lt.addatbeg(lt.headdata());
                       		lt.deleteatbeg();}}}
	lt.display();
        cout<<endl;
        return 0;}*/
int main(){
	int k;
	cin>>k;
	linkedlist all[k];
	int n[k];
	for(int j=0;j<k;j++){
		cin>>n[j];
		int y;
		for(int i=0;i<n[j];i++){
			cin>>y;
			all[j].addatbeg(y);}}
	linkedlist lt=all[0];
	int sm=n[0];
	for(int i=1;i<k;i++){
		int p=std::min(n[i],sm);
		//sm=n[i]+sm;
		for(int j=0;j<p;j++){
			if(lt.headdata()!=-10000 && all[i].headdata()!=-10000){
                                int l=std::min(lt.headdata(),all[i].headdata());
                                lt.addatbeg(l);
                                if(l==lt.headdata()){
                                        lt.deleteatbeg();}
                                if(l==all[i].headdata()){
                                        all[i].deleteatbeg();}}
                         else if(lt.headdata()==-10000 && all[i].headdata()!=-10000){
                                lt.addatbeg(all[i].headdata());
                                all[i].deleteatbeg();}
                         else if(all[i].headdata()==-10000 && lt.headdata()!=-10000){
                                lt.addatbeg(lt.headdata());
                                lt.deleteatbeg();}
			else{
				break;}}
		if(p==n[i] && p!=sm){
			for(int j=n[i];j<sm;j++){
				lt.addatbeg(lt.headdata());
				lt.deleteatbeg();}}
		if(p==sm && p!=n[i]){
			for(int j=sm;j<n[i];j++){
				lt.addatbeg(all[i].headdata());
				all[i].deleteatbeg();}}
		sm=n[i]+sm;}
        lt.display();
        cout<<endl;
        return 0;}

