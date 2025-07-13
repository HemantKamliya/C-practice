#include <stdio.h>

int main () {
    int n,m;
   printf("Enter the size of first array -: ");
   scanf("%d",&n);
   printf("Enter the size of second array -: ");
   scanf("%d",&m);
   int arr1[n],arr2[m];
   printf("Enter the elements of array 1 in sorted order");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
   printf("Enter the elements of array second in sorted order");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int merged[n+m];
    int count=0;
    
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        if(arr1[i]==arr2[j] && count==0){
            merged[count++]=arr1[i];
         }else if(arr1[i]==arr2[j] && merged[count]!= arr1[i]){
              merged[count++]=arr1[i];
         }
       }
    }
       for(int i=0;i<count;i++){
        printf("%d ",merged[i]);
    }

    return 0;
}