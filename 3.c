#include <stdio.h>

int bin(int a) {
  
    if (a == 1)
        return 2;
  
    if (a == 2)
        return 4;

   
    return bin(a - 1) + bin(a - 2);
}

int main() {
    int p;
    printf("Enter the number of digits (p <= 30): ");
    scanf("%d", &p);

    if (p > 30) {
        printf("Error! Number of digits exceeds 30.\n");
        return 0;
    }

    printf("%d\n", bin(p));
    return 0;
}
