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
    int target;
    printf("Enter the target number -: ");
    scanf("%d",&target);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(mat[i][j]==target){
            printf("The index of target element is %d%d ",i,j);
            break;
        }
    }
    }
    return 0;
}
