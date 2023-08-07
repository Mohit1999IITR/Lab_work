#include<iostream>
using namespace std;
struct node{
	int data;
	node* prev;
	node* next;
};
void insertAtBegin(node*& head, int data){
	node* new_node = new node;
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = head;
	head = new_node;
}
void insertAtEnd(node*& head,int data){
	node* new_node = new node;
	new_node->data = data;
	new_node->next = NULL;
	new_node->prev = NULL;
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
}
void deleteAtBegin(node*& head){
	if(head == NULL){
		cout<<"deletion cannot possible"<<endl;
	}
	node* temp = head;
	head =head->next;
	free(temp);
}
void deleteAtEnd(node*& head){
	if(head == NULL){
		cout<<"deletion cannot possible:"<<endl;
	}
	node* temp =head;
	node* temp1;
	while(temp->next != NULL){
		temp1 = temp;
		temp = temp->next;
	}
	temp1->next = NULL;
	temp->prev =NULL;
	free(temp);	
}
void display(node*& head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
}
int main(){
	int n;
	cout<<"enter the no of operations you want to perform"<<endl;
	cin>>n;
	node* head = NULL;
	int ch,item;
	for(int i=0;i<n;i++){
	cout<<"1. add node at the beginning:"<<endl;
	cout<<"2. add node at the end:"<<endl;
	cout<<"3. delete node at the beginnig:"<<endl;
	cout<<"4. delete node at the end:"<<endl;
	cout<<"5. display:"<<endl;
	cin>>ch;
	switch(ch){
		case 1:
			cout<<"enter item to insert:"<<endl;
			cin>>item;
			insertAtBegin(head,item);
			display(head);
			break;
		case 2:
			cout<<"enter item to insert:"<<endl;
			cin>>item;
			insertAtEnd(head,item);
			display(head);
			break;
		case 3:
			deleteAtBegin(head);
			display(head);
			break;
		case 4: 
			deleteAtEnd(head);
			display(head);
			break;
		case 5:
			display(head);
			break;
		default:
			cout<<"Invalid selection"<<endl;
			break;
	}
	}
}



