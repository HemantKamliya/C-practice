#include <stdio.h>
int dayOfWeek(int day,int month,int year){
    int totalDays;
for(int i=1990;i<year;i++){
    if(i%4==0 || i%100 != 0 && i%400== 0){
    totalDays+=366;
}else{
    totalDays+= 365;
}
}
return totalDays%7;
}
int main () {
    int year;
    printf("Enter a year -: ");
    scanf("%d",&year);
    char *ch[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday",};
    int x=dayOfWeek(5,5,year);
    printf("%d\n",x);
    printf("%s",(ch[x]));
    return 0;
}