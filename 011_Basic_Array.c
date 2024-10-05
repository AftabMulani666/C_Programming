#include<stdio.h>
#include<conio.h>

int main()
{
    int Value[8]={};
    printf("Enter The Element Number 1 : ");
    scanf("%d",&Value[0]);
    printf("Enter The Element Number 2 : ");
    scanf("%d",&Value[1]);
    printf("Enter The Element Number 3 : ");
    scanf("%d",&Value[2]);
    printf("Enter The Element Number 4 : ");
    scanf("%d",&Value[3]);
    printf("Enter The Element Number 5 : ");
    scanf("%d",&Value[4]);
    printf("Enter The Element Number 6 : ");
    scanf("%d",&Value[5]);
    printf("Enter The Element Number 7 : ");
    scanf("%d",&Value[6]);
    printf("Enter The Element Number 8 : ");
    scanf("%d",&Value[7]);

    printf("\nThe Value Of 1 Is %d",Value[0]);
    printf("\nThe Value Of 2 Is %d",Value[1]);
    printf("\nThe Value Of 3 Is %d",Value[2]);
    printf("\nThe Value Of 4 Is %d",Value[3]);
    printf("\nThe Value Of 5 Is %d",Value[4]);
    printf("\nThe Value Of 6 Is %d",Value[5]);
    printf("\nThe Value Of 7 Is %d",Value[6]);
    printf("\nThe Value Of 8 Is %d",Value[7]);

    getch();
    return 0;
}
