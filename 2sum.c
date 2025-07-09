#include <stdio.h>

int main () {
    int x, y;
    printf("Enter value of x -: ");
    scanf("%d",&x);
    printf("Enter value of x -: ");
    scanf("%d",&y);
int sum(int *num1,int *num2){
        return (*num1+*num2);
}
printf("The sum of two numbers is -: %d",sum(&x,&y));
    return 0;
}