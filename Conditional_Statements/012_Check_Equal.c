#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1,Num2;
    printf("\nEnter The Value Of Num1:");
    scanf("%d",&Num1);
    printf("\nEnter The Value Of Num2:");
    scanf("%d",&Num2);

    if(Num1==Num2)
    {
        printf("The Both Numbers Are Equal");
    }
    else
    {
        printf("The Given Values Are Different (Hence They Are Not Equal)");
    }
    getch();
    return 0;

}
