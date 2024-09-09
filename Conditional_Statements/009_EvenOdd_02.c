#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("\nEnter The Number");
    scanf("%d",&num);
    if (num %2==0)
    {
        printf("\nThe Number Is EVEN : %d",num);
    }
    else if(num ==0)
    {
        printf("\nThe Number Is invalid" );
    }
    else
    {
        printf("\nThe Number Is Odd : %d",num);
    }
    getch();
    return 0;
}

