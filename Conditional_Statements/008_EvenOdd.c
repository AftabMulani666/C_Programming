#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter The Number");
    scanf("%d",&num);
    if (num %2==0)
    {
        printf("\nThe Number Is EVEN : %d",num);
    }
    else
    {
        printf("The Number Is Odd : %d",num);
    }
    getch();
    return 0;
}
