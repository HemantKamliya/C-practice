#include <stdio.h>
struct Node{
int val1;
};
int main () {
    struct Node n1;
    struct Node *newNode;
    newNode=&n1;
    printf("Enter the value -: ");
    scanf("%d",&newNode->val1);
    printf("The value is %d ",newNode->val1);
    return 0;
}