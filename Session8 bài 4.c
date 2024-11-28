#include<stdio.h>
int main(){
	int arr[2][4] = {{1,2,3,4},{6,7,8,9}};
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<2;i++){
    	for(int j=0;j<4;j++){
    		if(arr[i][j]>max){
    			max=arr[i][j];
			}
		}
	}
	printf("So lon nhat trong mang la: %d\n",max);

	return 0;
}
	
