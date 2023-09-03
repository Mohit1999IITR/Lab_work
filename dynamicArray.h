#include<iostream>
using namespace std;

class DynamicArray{
	private:
		int* array;
		int size;
		int capacity;
	
	void resize(int newCapacity){
		int* newArray = new int[newCapacity];
		for(int i=0;i<size;i++){
			newArray[i] = array[i];
		}
		delete[] array;
		array = newArray;
		capacity = newCapacity;
	}
	public:
	    DynamicArray() : array(nullptr),size(0),capacity(0){}

	    ~DynamicArray(){
		    delete[] array;
	    }

	    void insert(int element){
		    if(size == capacity){
			    int newCapacity = (capacity == 0) ? 1: capacity*2;
			    resize(newCapacity);
		    }
		    array[size] = element;
		    size++;
	    }

	    void removeAt(int index){
		    if(index<0 || index >= size){
			    cout<<"Invalid index"<<endl;
			    return;
		    }
		    for(int i=index;i<size-1;i++){
			    array[i] = array[i+1];
		    }
		    size--;
		    shrink();
	    }

	    void shrink(){
		    if(size <capacity/2){
			    int newCapacity = capacity/2;
			    if(newCapacity <1){
				    newCapacity =1;
			    }
			    resize(newCapacity);
		    }
	    }

	    void display(){
		    for(int i=0;i<size;i++){
			    cout<<array[i] << " ";
		    }
		    cout<<endl;
	    }
};


