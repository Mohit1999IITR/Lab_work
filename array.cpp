#include<iostream>
using namespace std;
template<class T> T findElement(T arr[],T n,T ele){
	int i;
	for( i=0;i<n;i++){
		if(arr[i] == ele)
			return i;

	}
	return -1;
}
template<class T> void insertEnd(T arr[],T n,T key,T capacity){
	if(n>= capacity)
		cout<<"capacity already full";
	arr[n] = key;
}
template<class T> void insertAtPosition(T arr[],T n,T key, T pos){
	for(int i=n-1;i>=pos;i--){
		arr[i+1] = arr[i];
	}
	arr[pos] = key;
}
template<class T> void deleteElement(T arr[],T n,T key){
	T pos = findElement(arr,n,key);
	if(pos == -1){
		cout << "Element not found";
	}
	T i;
	for(i =pos;i<n-1;i++)
		arr[i] =arr[i-1];
}
template<class T> void displayArray(T arr[],T n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"";
}
int main(){
	int arr[100];
	arr[0] =1;
	arr[1] =6;
	int ele,pos;
	int start =2;
	int size =100;
	int n;
	cout<<"Enter a number 1. Searching\n 2.insertAtEnd\n 3.insertAtPosition\n 4.deleteElement.\n 5.displayArray";
	cin>>n;
	switch(n){
		case 1:
                        cout<<"Enter element that you wanna search";
			cin>>ele;
		        pos = findElement(arr,start,ele);
			if(pos == -1) cout<<"element Not Found";
			else cout<<pos;
			break;
		case 2:
			cout<<"enter element that you want to insert";
			cin>>ele;
		        insertEnd(arr,start,ele,size);
			start+= 1;
			displayArray(arr,start);
			break;
		case 3:
			cout<<"enter element and position where you wanna insert it";
			cin>>ele>>pos;
			insertAtPosition(arr,start,ele,pos);
			start+=1;
			displayArray(arr,start);
			break;
		case 4:
			cout<<"enter element you want to delete";
			cin>>ele;
			deleteElement(arr,start,ele);
			start -=1;
			displayArray(arr,start);
			break;
		case 5:
			displayArray(arr,start);
			break;
		default:
			cout<<"invalid input";
		}

}
