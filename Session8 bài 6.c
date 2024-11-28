#include <stdio.h>
int main(){
    int a = 3, b = 4; 
    int arr[3][4] ={
        {1,2,3,4},
        {5,6,7,8},
        {10,11,12,13}
    };
    int sum = 0;
    for (int j = 0; j < b; j++){
        sum += arr[0][j];     
        sum += arr[a-1][j];    
    }
	for (int i = 1; i < a - 1; i++){
        sum += arr[i][0];     
        sum += arr[i][b-1];  
    }
    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum); 
    return 0;
}

