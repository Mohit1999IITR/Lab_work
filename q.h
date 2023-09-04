#include<iostream>
using namespace std;
class queue{
	private:
		int queue[100],n=100,front1 = -1,rear1 = -1;
	public:
		int front(){
			return front1;
		}
		int rear(){
			return rear1;
		}
		int valueAt(int index){
			return queue[index];
		}
		void Insert(int val){
			if(rear1 == n-1)
				cout<<"Queue overflow"<<endl;
			else{
				if(front1 == -1)
					front1 =0;
				rear1++;
				queue[rear1] =val;
			}
		}
		void Delete(){
			if(front1 == -1 || front1 > rear1){
				cout<<"queue underflow";
				return;
			}
			else{
				front1++;
			}
		}
		void Display(){
			if(front1 == -1)
				cout<<"Queue is empty"<<endl;
			else{
				cout<<"Queue elements are ;";
				for(int i= front1;i<= rear1;i++)
					cout<<queue[i]<<" ";
				cout<<endl;
			}
		}
};

