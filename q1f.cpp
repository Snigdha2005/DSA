#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Node{
	public:
		int data;
	//	Node * prev;
		Node * next;};
class linkedlist{
	public:
		Node * head;
		Node * tail;
		linkedlist(){
			head=tail=NULL;}
		void addatend(int item);
		void deleteatend();
		Node * head1();
};
int main(){
	int n;
	cin>>n;
	linkedlist all[n];
	int no[n];
	for(int i=0;i<n;i++){
		linkedlist lt;
		cin>>no[i];
		int y;
		for(int t=0;t<no[i];t++){
			cin>>y;
			lt.addatend(y);}
		all[i]=lt;
	}
	linkedlist ltm=all[0];
	for(int i=0;i<n;i++){
		
