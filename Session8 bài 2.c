#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5};
    int a = sizeof(arr) / sizeof(arr[0]);  
    int b, found = 0;
    printf("Nhap phan tu: ");
    scanf("%d",&b);
     for (int i = 0; i < a; i++) {
        if (arr[i] == b) {
            printf("Vi tri phan tu trong mang la %d\n", i);
            found = 1;
            break;
        }
    }
	if (!found) {
    	printf("Phan tu khong ton tai trong mang \n");
	}
	
	return 0;
}
	
