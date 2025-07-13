#include <stdio.h>

int main () {
    int r,c;
    printf("Enter the rows in matrix -:");
    scanf("%d",&r);
    printf("Enter the columns in matrix -: ");
    scanf("%d",&c);
    int mat[r][c];
    printf("Enter the elements of matrix .");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
         scanf("%d",&mat[i][j]);
    }
    }
    int count=0;
    int maxSum=0;
    int sum=0;
      for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
        sum+=mat[i][j];
    }
    if(sum>maxSum){
        maxSum=sum;
        count=i;
    }
    }
    printf("The row with index  %d  is the row with maximun sum ",count);

    return 0;
}