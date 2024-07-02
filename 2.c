#include <stdio.h>

int ncd(int a, int b) {
    if (b == 0)
        return a;
    else
        return ncd(b, a % b);
}

int nck(int numbers[], int count) {
    int result = numbers[0];

    for (int i = 1; i < count; i++) {
        result = (result * numbers[i]) / ncd(result, numbers[i]);
    }

    return result;
}

int main() {
    int p; 

    printf("Enter the number of numbers: ");
    scanf("%d", &p);

    if(p<2 || p>20){
        printf("Error! The number of numbers is not suitable!");
        return 0;
    }
else{
    int b[p]; 
    printf("Enter numbers separated by a space: ");
    for (int i = 0; i < p; i++) {
        scanf("%d", &b[i]);
    }


    int result = nck(b, p); 
    printf("Least common multiple: %d\n", result);
}
    return 0;
}
