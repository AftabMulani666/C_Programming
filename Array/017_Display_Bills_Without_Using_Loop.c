#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Bills[7] ={};

    printf("Enter The Bill No 1 -> ");
    scanf("%d",&Bills[0]);

    printf("Enter The Bill No 2 -> ");
    scanf("%d",&Bills[1]);

    printf("Enter The Bill No 3 -> ");
    scanf("%d",&Bills[2]);

    printf("Enter The Bill No 4 -> ");
    scanf("%d",&Bills[3]);

    printf("Enter The Bill No 5 -> ");
    scanf("%d",&Bills[4]);

    printf("Enter The Bill No 6 -> ");
    scanf("%d",&Bills[5]);

    printf("Enter The Bill No 7 -> ");
    scanf("%d",&Bills[6]);

    getch();
    system("cls");

    printf("Here's The Bills : ");

    printf("\nHere's  The Bill No 1 -> %d",Bills[0]);
    printf("\nHere's  The Bill No 2 -> %d",Bills[1]);
    printf("\nHere's  The Bill No 3 -> %d",Bills[2]);
    printf("\nHere's  The Bill No 4 -> %d",Bills[3]);
    printf("\nHere's  The Bill No 5 -> %d",Bills[4]);
    printf("\nHere's  The Bill No 6 -> %d",Bills[5]);
    printf("\nHere's  The Bill No 7 -> %d",Bills[6]);

    getch();
    return 0;
}
//Thanks
