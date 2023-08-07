#include<iostream>
#include "ll.cpp"
using namespace std;
int main(){
	node* top = NULL;
	int item,ch;
	int n;
	cout<<"no of operations you want to perform"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"choose any opeartion:"<<endl;
		cout<<"1: push in stack:"<<endl;
		cout<<"2: pop from stack:"<<endl;
		cout<<"3: display all elements in stack:"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"enter item to insert"<<endl;
				cin>>item;
				addNodeAtLast(top,item);
				display(top);
				break;
			case 2:
				deleteLastNode(top);
				display(top);
				break;
			default:
				cout<<"Invalid INput"<<endl;
		}
	}
}





