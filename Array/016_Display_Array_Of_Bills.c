
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int i = 0,Bills[7] = {0};

    for(i=0;i<7;i++)
    {
        printf("Enter The Bill No %d -> ",i+1);
        scanf("%d",&Bills[i]);
    }
    getch();
    system("cls");

    printf("Here's The Bills ->");

    for(i=0;i<7;i++)
    {
        printf("\nThe Bill No %d is : %d",i+101,Bills[i]);
    }

    getch();
    return 0;
}
//Thanks 
