#include<iostream>
#include "ll.cpp"
using namespace std;
int main(){
	int n;
	cout<<"enter the size of the adjacency matrix"<<endl;
	cin>>n;
	int arr[n][n];
	cout<<"enter the elements of the adjacency matrix"<<endl;
	for(int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	node* adArr[n];
/*	for(int i=0;i<n;i++){
		adArr[i] = &arr[i][0];
	}  */
	node* head =NULL;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j] == 1){
				 addNodeAtLast(head,j);
			}
		}
		adArr[i] = head;
		head = NULL;
	}
	for(int i=0;i<n;i++){
		head = adArr[i];
		cout<<"index"<<"("<<i<<")"<<"->";
		display(head);
		cout<<""<<endl;
	}
}


