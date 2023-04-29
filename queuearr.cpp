#include<iostream>
using namespace std;
#define MAX 10
class Queue{
	int head;
	int tail;
	public:
		int arr[MAX];
		Queue(){
			head=-1;
			tail=-1;}
		void enqueue(int item);
		void dequeue();
};

void Queue::enqueue(int item){
	if((tail-head+1)==MAX){
		cout<<"queue overflow\n";
	}
	else if(head==-1 && tail==-1){
		head=tail=0;
		arr[tail]=item;
		cout<<"element added "<<item<<endl;}
	else{
		arr[++tail]=item;
		cout<<"element added "<<item<<endl;}}
void Queue::dequeue(){
	if(tail==-1){
		cout<<"queue underflow\n";}
	else{	
		int item=arr[head];
		if(head!=tail){
			head++;}
		else{
			head=tail=-1;}
		cout<<"element deleted "<<item<<endl;}}


int main(){
	Queue qt;
	qt.dequeue();
	qt.enqueue(10);
	qt.enqueue(20);
	qt.enqueue(30);
	qt.dequeue();
	qt.dequeue();
	qt.dequeue();
	qt.dequeue();}
