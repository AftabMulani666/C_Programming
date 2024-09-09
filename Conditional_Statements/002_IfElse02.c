#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2;
    printf("\nEnter The 1st Number");
    scanf("%d",&n1);
    printf("\nEnter The 2nd Number");
    scanf("%d",&n2);
    if (n1>n2)
    {
        printf("\n \aThe Maximum Number Is : %d",n1);
    }
    else
    {
        printf("\n \aThe Maximum Number Is %d: ",n2);
    }
    getch();
    return 0;
}
