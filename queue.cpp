#include<iostream>
#include "ll.cpp"
using namespace std;
int main(){
	node* front =NULL;
	int item,ch;
	int n;
	cout<<"no of operations you want to perform:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"choose any operation:"<<endl;
		cout<<"1: Insert an element in queue ENQUEUE:"<<endl;
		cout<<"2: Delete an element in queue DEQUEUE:"<<endl;
		cout<<"3: Display all elements in queue:"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"enter item to insert"<<endl;
				cin>>item;
				addNodeAtLast(front,item);
				display(front);
				break;
			case 2:
				deleteFirstNode(front);
				display(front);
				break;
			case 3:
				display(front);
				break;
			default:
				cout<<"Invalid Input"<<endl;
		}
	}
}
