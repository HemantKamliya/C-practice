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
    int maxCount=0;
    int row[r];
    for (int i = 0; i < r; i++) {
        count=0;
        maxCount=0;
        for (int j = 0; j < c; j++) {
            if(mat[i][j]==1){
                count++;
            }else{
                count=0;
            }
            if(count>maxCount){
                maxCount=count;
            }
row[i]=maxCount;
        }
        maxCount=0;
        for (int i = 1; i < r; i++) {
            if(row[maxCount]<row[i]){
                maxCount=i;
            }
        }
       
    }
     printf("The row index %d has max consecutive 1s ",maxCount);

    return 0;
}