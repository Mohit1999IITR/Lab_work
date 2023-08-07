#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
void addNodeAtBegin(node*& head,int data){
	node *new_node = new node;
	new_node->data = data;
	new_node->next = head;
	head = new_node;
}
void addNodeAtLast(node*& head, int data){
	node *new_node = new node;
	new_node->data = data;
	new_node->next = NULL;
	if(head == NULL){
		head =new_node;
		return;
	}
	node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new_node;
}	
void display(node*& head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}
void deleteLastNode(node*& head){
	if(head->next == NULL){
		head = NULL;
		return;
	}
	node *temp = head;
	node *temp1;
        while(temp->next != NULL){
		temp1 = temp;
		temp =temp->next;
	}
	temp1->next = NULL;
	free(temp);
}
void deleteFirstNode(node*& head){
	if(head->next == NULL){
		head= NULL;
		return;
	}
	node *temp = head;
	head = head->next;
	free(temp);
}

int main(){
	node *head = NULL;
	int n;
	cout<<"No. of operations you want to perform"<<endl;
	cin>>n;
	int ch,item;
	for(int i=0;i<n;i++){
		cout<<"choose any opetaion :"<<endl;
		cout<<"1: insert at begin:"<<endl;
		cout<<"2: insert at end:"<<endl;
		cout<<"3: delete at begin:"<<endl;
		cout<<"4: delete at end:"<<endl;
		cout<<"5: display:"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"enter item to insert:"<<endl;
				cin>>item;
		        	addNodeAtBegin(head,item);
				display(head);
				break;
			case 2:
				cout<<"enter item to insert:"<<endl;
				cin>>item;
				addNodeAtLast(head,item);
				display(head);
				break;
			case 3:
				deleteFirstNode(head);
				display(head);
				break;
			case 4:
				deleteLastNode(head);
				display(head);
				break;
			case 5:
				display(head);
				break;
			default:
				cout<<"Invalid selection"<<endl;
		}
	}
}





