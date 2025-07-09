#include<stdio.h>
int main (){
    int num1=10, num2=20, num3=30;
 int result=(num3++ + num1++ + (++num2));
    printf("Result: %d\n", result);
    printf("The value of num1 is: %d\n", num1);
    printf("The value of num2 is: %d\n", num2); 
    printf("The value of num3 is: %d\n", num3);
    
    return 0;

}