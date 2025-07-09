#include <stdio.h>

int main () {
    int *ptr;
    printf("The address of ptr: %p\n",ptr);
    printf("The address of ptr: %p\n",ptr++);
    printf("The address of ptr: %p\n",ptr--);
    printf("The address of ptr: %p\n",ptr++);
    printf("The address of ptr: %p\n",ptr--);
    return 0;
}