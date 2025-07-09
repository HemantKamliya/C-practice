#include <stdio.h>
int main () {
   
    for(int i=0;i<6;i++){
        for(int j=5;j>=0;j--){
        
            if(i<j){
                printf(" ");
            }else if(i>=j){
                printf("%d",(i-j)+1);
             
            }
      } printf("\n");

    }
    return 0;
}