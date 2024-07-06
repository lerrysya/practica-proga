#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a natural number (1 < n < 150): ");
    scanf("%d", &n);
  
    if (n <= 1 || n >= 150) {
        printf("Invalid input! Please enter a natural number between 1 and 150.\n");
        return 0;
    }

    for (int m = 1; m <= n; m++) {

        if (n % m == n / m) {
            count++;
        }
    }
    printf("Number of equal divisors: %d\n", count);

    return 0;
}
