#include <stdio.h>
int main () {
    int num;
    printf("Enter the number -: ");
    scanf("%d",&num);

    int fibo(int n){
        if(n<=1){
            return n;
        }
        return fibo(n-1)+fibo(n-2);
    }
void fibo2(int n){
    static int i=0;
       if(i>n) return;
    printf("%d ",fibo(i));
    i++;
    fibo2(n);
}
    fibo2(num);
    return 0;
}