#include <stdio.h>

int minSteps(int x, int y) {
    if (x == y) { 
        return 0;
    } else if (y - x == 1) { 
        return 1;
    } else if (y - x < 3) { 
        return 2;
    } else if (y - x == 3) { 
        return 3;
    } else {
        int a = (y - x - 2) / 2; 
        int b = (y - x - 2) % 2; 
        return 2 + a + b;
    }
}

int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    if (x < 0 || x >= 2147483648 || y < 0 || y >= 2147483648 || x > y) {
        printf("Invalid x and y values.\n");
        return 1;
    }

    int steps = minSteps(x, y);
    printf("Minimum number of steps: %d\n", steps);

    return 0;
}
