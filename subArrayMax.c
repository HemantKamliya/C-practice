#include <stdio.h>
int maxSums(int i,int j){
   return  i>j?i:j;
}

int main () {
        int n=9;
    printf("Enter the size of array -:");
    scanf("%d",&n);
    int arr[6]={9,10,1,-2,10,2};
//   printf("Enter the elements  of array -:");

//     for (int i = 0; i <n ; i++) {
//     scanf("%d",&arr[i]);
//     }

    int sum=arr[0];
   int maxSum=arr[0];
    
for (int i = 1; i < n; i++) {
       sum=maxSums(arr[i],(sum+arr[i]));
       if(sum>maxSum){
         maxSum=sum;
       }
}
printf("%d",maxSum);
    return 0;
}