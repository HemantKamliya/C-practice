#include <stdio.h>

int main () {
    int n=0;
    printf("Enter the size of array -:");
    scanf("%d",&n);
    int arr[n];
  printf("Enter the elements  of array -:");

    for (int i = 0; i <n ; i++) {
    scanf("%d",&arr[i]);
    }
    int sum=0,maxSum=0;
    int left=0,right=n-1;

    while(left<=right){
        sum=0;
        for (int i = left; i <=right; i++) {
          sum+= arr[i];
        }
        if(sum>maxSum){
            maxSum=sum;
        }
        if(arr[left]>=arr[right]){
            right--;
        }else {
            left++;
        }
    }
    printf("The  maximum sum of subArray is %d",maxSum);
        
    return 0;
}