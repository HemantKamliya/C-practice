#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(1)
typedef struct
{
    char name[50];
    char email[50];
    int age;
   
}stud;
#pragma pack()
 void createData(const char *fileName){
       FILE *fp=fopen(fileName,"a");
    stud rec;
    if(!fp){
        printf("Error in opening file for create student record\n");
    }
    printf("\nEnter the name of student -: ");
    scanf(" %s",rec.name);
    printf("\nEnter the email of student -: ");
    scanf(" %s",rec.email);
    printf("\nEnter the age of student -: ");
    scanf("%d",&rec.age);
     fprintf(fp,"%s\t%s\t%d\t\n",rec.name,rec.email,rec.age);
     fclose(fp);
     printf("Record address in file \n");
    }
    
void readData(const char *fileName){
   FILE *fp=fopen(fileName,"r+");
   stud rec;
   if(!fp){
    printf("No data found");
    return;
   }
   printf("\n %-20s %-30s %-5s \n","name","email","age");
    while(fscanf(fp,"%s%s%d",rec.name,rec.email,&rec.age)==3){
           printf(" %-20s %-30s %-5d",rec.name,rec.email,rec.age);
    }
        fclose(fp);
        printf("\nSucces \n");

    }

 void updateData(const char *fileName){
    FILE *fp=fopen(fileName,"r");
    FILE *temp=fopen("temp","w");
    stud rec;
    char targetName[50];
    int found=0;
    if(!fp | !temp){
        printf("Error opening file");
        return ;
    }
    printf("Enter name of record to update : ");
    scanf("%s",&targetName);
    while(fscanf(fp,"%s%s%d",rec.name,rec.email,rec.age)==3){
        if(strcmp(rec.name,targetName)){
            printf("Enetr the email and age");
            scanf("%s%d",rec.email,&rec.age);
            found=1;
        }
        fprintf(temp,"%s%s%d",rec.name,rec.email,rec.age);
    }
    fclose(fp);
    fclose(temp);
    rename("temp.xls",fileName);
if(found){
    printf("Data updated");
}else {
    printf("No data found");
}
 }
 void deleteData(const char *fileName){}

int main () {
     const char *fileName="studentrecord.xls";
    
     while(1){
         int choice;
        printf("\n ------Student Record system ------\n");
        printf("1. Create record \n");
        printf("2. Display record \n");
        printf("3. update Record \n");
        printf("4. Delete record \n");
        printf("5.exit \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            createData(fileName);
            break;

            case 2:
            readData(fileName);
            break;

            case 3:
            updateData(fileName);
            break;

            case 4:
            deleteData(fileName);
            break;

          case 5:
          exit(0);
            break;

            default:
            printf("Invalid Input ! ");
            
        }
     }

    return 0;
} 