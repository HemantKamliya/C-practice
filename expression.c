#include <stdio.h>
#include<math.h>
int main () {
    unsigned long number=0;
    printf("Enter the number");
    scanf("%lu",&number);
    int length=log10(number)+1;
    if(length==10){
        printf("Number is valid");
    }else{
        printf("Number is invalid");
    }

    return 0;
}