#include <stdio.h>

int main () {
    int arr[]={3,1,2,5,4,9,6,};
    int n=7;
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
          while(j>=0 && arr[j]>=key){
            arr[j+1]=arr[j];
            j--;
          }
          arr[j+1]=key;
    }
       for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}