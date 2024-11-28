#include <stdio.h>
int main() {
    int a;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &a);
    if (a <= 0) {
        return 1; 
    }
    int arr[a][a];
    int number = 1;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            arr[i][j] = number++;
        }
    }
    printf("Ma tran vuong %dx%d la: \n", a, a);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

	
