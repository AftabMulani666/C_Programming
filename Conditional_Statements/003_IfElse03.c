#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2;
    printf("Enter The 1st Number");
    scanf("%d",&n1);
    printf("Enter The 2nd Number");
    scanf("%d",&n2);
    if (n1<n2)
    {
        printf("The Maximum Number Is : %d");
    }
    else if(n1>n2)
    {
        printf("The Maximum Number Is : %d ");
    }
    else
    {
        printf("The Number Is Neutral %d: ");
    }
    getch();
    return 0;
}

