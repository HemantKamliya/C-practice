#include <stdio.h>

int main () {
    int budget;
    printf("Enter the budget in rupees -: ");
    scanf("%d",&budget);
    if(budget<=1000){
        printf("Local Brands");
    }else if(budget>1000 && budget<=2000){
        printf("zudio");
    }else if(budget>2000 && budget<=5000){
        printf("Max");
    }else if(budget>5000){
        printf("Blackberry and peterengland");
    }
    return 0;
}