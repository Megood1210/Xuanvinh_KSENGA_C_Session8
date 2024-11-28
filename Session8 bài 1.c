#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int a = sizeof(arr)/sizeof(arr[0]);
	for(int i=a-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	return 0;
}
	
