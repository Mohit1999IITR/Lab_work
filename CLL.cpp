#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
node* findLastElement(node*& head){
	if(head == NULL){
		return NULL;
	}
	if(head->next == head){
		return head;
	}
	node* temp = head;
	while(temp->next != head){
		temp =temp->next;
	}
	return temp;
}

void insertInEmpty(node*& head,int data){
	node* new_node = new node;
	new_node->data = data;
	new_node->next = NULL;
	head = new_node;
	new_node->next = head;
}
void insertAtBegin(node*& head,int data){
	node* new_node = new node;
	new_node->data = data;
	new_node->next = NULL;
	if(head == NULL){
		insertInEmpty(head,data);
	}
	new_node->next =head;
	node* lastNode = findLastElement(head);
	lastNode->next = new_node;
}
void display(node*& head){
	if(head == NULL){
		cout<<"empty list"<<endl;
		return;
	}
	node* temp =head;
	while(temp->next != head){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<temp->data<<" ";
}
void deleteAtBegin(node*& head){
	if(head == NULL){
		cout<<"empty list"<<endl;
		return;
	}
	if(head->next == head){
		node* temp =head;
		head =NULL;
		free(temp);
		cout<<"last element deleted"<<endl;
		return;
	}
	node* temp =findLastElement(head);
	node* temp1 = head;
	temp->next = head->next;
	head =head->next;
	free(temp1);
}
int main(){
	int n;
	node* head = NULL;
	cout<<"enter the no of operations you want to perform"<<endl;
	cin>>n;
	int item,ch;
	for(int i=0;i<n;i++){
		cout<<"choose the operation:"<<endl;
		cout<<"1. insert in empty list"<<endl;
		cout<<"2. insert at begin"<<endl;
		cout<<"3. delete at begin"<<endl;
		cout<<"4. display"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"enter the item to insert:"<<endl;
				cin>>item;
				insertInEmpty(head,item);
				display(head);
				break;
			case 2:
				cout<<"enter the item to insert:"<<endl;
				cin>>item;
				insertAtBegin(head,item);
				display(head);
				break;
			case 3:
				deleteAtBegin(head);
				display(head);
				break;
			case 4:
				display(head);
				break;
			default:
				cout<<"Invalid selection"<<endl;
				break;
		}
	}
}



  	
