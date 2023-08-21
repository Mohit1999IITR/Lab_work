#include<iostream>
#include "queue.h"
using namespace std;
int main(){
	node* front =NULL;
	int flag =1;
	int ch,item;
	queue obj1,obj2,obj3;
	while(flag== 1){
		cout<<"do you want to perform operation?"<<endl;
		cout<<"press 1 for Yes and 0 for NO"<<endl;
		cin>>flag;
		if(flag == 0) break;
		cout<<"choose any opeartion:"<<endl;
		cout<<"1: Insert an element in queue Enqueue:"<<endl;
		cout<<"2: Delete an element in queue Dequeue:"<<endl;
		cout<<"3: Display all elements in queue:"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"enter the item to insert:"<<endl;
				cin>>item;
				obj1.insertQueue(front,item);
				break;
			case 2:
				obj2.deleteQueue(front);
				break;
			case 3:
				obj3.displayQueue(front);
				break;
			default:
				cout<<"Invalid Input"<<endl;
		}
	}
}


