#include<iostream>
using namespace std;

bool isSorted(int arr[],int size,int end=1){
	if(end>=size){
		return true;
	}

	if(arr[end-1]>arr[end]){
		return false;
	}
	
	bool b = isSorted(arr,size,end+1);
	
	return b;
}


int main(){
	int x[]={1,2,3,4,5};
	int y[]={3,44,53,22,89};
	
	cout<<isSorted(x,5)<<endl<<isSorted(y,5);

	return 0;
}