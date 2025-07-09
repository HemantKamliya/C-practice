#include <stdio.h>
#include <math.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int count = 0;
    int originalNumber = x;
    while (originalNumber != 0) {
        count++;
        originalNumber /= 10;
    }

    int arm(int *num, int *dc) {
        int result = 0;
        int tempNum = *num; 

        for (int i = 1; i <= *dc; i++) {
            int temp = tempNum % 10;
            result += pow(temp, *dc);
            tempNum /= 10;
        }

        if (result == *num) {
            printf("Armstrong Number.\n");
        } else {
            printf("Not Armstrong Number!\n");
        }
        return 0;
    }

    arm(&x, &count);
    return 0;
}