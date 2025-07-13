#include <stdio.h>

int main () {
    int n;
    printf("Enter the size of array -: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the %d element of array -:",i+1);
        scanf("%d",&arr[i]);
    }
       for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
       }
    }
      printf("The sorted elements of array  are -:");
      for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }

    return 0;
}