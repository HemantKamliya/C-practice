#include <stdio.h>

int main () {
    int arr[5];
    for(int i=0;i<7;i++){
       printf("Enter array value :- ");
       scanf("%d",&arr[i]);
       
    }
     for(int i=0;i<7;i++){
        printf("%d\n",arr[i]);
    }
     for(int i=0;i<7;i++){
        printf("%d",arr[i]);
    }
    return 0;
}