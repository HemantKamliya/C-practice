#include <stdio.h>
int main () {
    int Balance;
    printf("Enter the current balance in your acccount -:");
    scanf("%d",&Balance);
    int money=0;
    int Deposit(int money){
        Balance=Balance+money;
        printf("Succes\n");
        return Balance;
    }
    int withdraw(int money){
        if(money<=Balance){
            Balance=Balance-money;
            printf("Success\n");
            return Balance;
        }else{
            printf("Insufficient Balance");
            return Balance;
        }
    }
    char choice;
    printf("Enter your choice 'D' for Deposi and 'W' for withdraw -: ");
    scanf(" %c",&choice);

    (choice =='w')?(choice='W'):(choice=='d')?(choice='D'):(choice=choice);

    switch (choice){
        case 'D' : printf("Enter amount to deposit -: ");
                scanf("%d",&money);
             int currentBalance=    Deposit(money); 
             printf("Current Balance is %d ",currentBalance); 
             break;
        case 'W': printf("Enter amount to Withdraw -: ");
                scanf("%d",&money);
        currentBalance =withdraw(money);
         printf("Current Balance is %d \n ",currentBalance);
          break;
          default :
          printf("Invalid !");    
    }
    return 0;
}