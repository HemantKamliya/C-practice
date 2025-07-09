#include <stdio.h>
#include <math.h>

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  

    if (num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    int div = log10(num);
    int first_digit = num / pow(10, div);
    int last_digit = num % 10;
    int middle_part = (num % (int)pow(10, div)) / 10;
    int swapped_num = last_digit * pow(10, div) + middle_part * 10 + first_digit;                               
    printf("Swapped number: %d\n", swapped_num);
    return 0;
}
