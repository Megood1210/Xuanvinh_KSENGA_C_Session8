#include <stdio.h>

int main() {
    int a = 3;  
    int matrix[3][3] = {
        {2,1,3},
        {6,4,5},
        {7,8,9}
    };
    int sum = 0;
    printf("Cac phan tu trên duong cheo: \n");
    for (int i = 0; i < a; i++) {
        printf("%d ", matrix[i][i]);
        sum += matrix[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo: %d\n", sum);

    return 0;
}

