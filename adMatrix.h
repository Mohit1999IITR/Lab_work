#include<iostream>
using namespace std;
class adMatrix{
	public:
		int** createAdjMatrix(int n){
		
			int** adj = new int*[n];
			cout<<"enter the adjacency matrix:"<<endl;
			for(int i=0;i<n;i++){
				adj[i] = new int[n];
				for(int j=0;j<n;j++){
					cin>>adj[i][j];
				}
			}
			return adj;
		}
};
