#include<iostream>
#include "dynamicArray.h"
int main(){
	int next = 1;
	int ch;
	int num;
	DynamicArray dynamicArray;
	while(next){
		cout<<"do you want to perform any opeartion on array 1/0"<<endl;
		cin>>next;
		if(next == 0) break;
		cout<<"1. insert an element in the array"<<endl;
		cout<<"2. display all the elements of the array"<<endl;
		cout<<"3. remove element at a position of the array"<<endl;
		cin>>ch;
		switch(ch){
			case 1:
				cout<<"enter the number you want to enter"<<endl;
				cin>>num;
				dynamicArray.insert(num);
				break;
			case 2:
				dynamicArray.display();
				break;
			case 3:
				cout<<"enter the index at which you want to perform deletion"<<endl;
				cin>>num;
				dynamicArray.removeAt(num);
				break;
			default:
				cout<<"Invalid input"<<endl;
				break;
		}
	}

}
