#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2;
    up:
    printf("\n Enter The 1st Number ");
    scanf("%d",&n1);
    printf("\n Enter The 2nd Number ");
    scanf("%d",&n2);

    if(n1==n2)
    {
        printf("\nThe  Number Is Neutral : %d",n1);
        goto up;
    }
    else if(n1 > n2)
    {
        printf("\nThe Maximum Number Is : %d ",n1);
    }
    else if(n1 < n2)
    {
        printf("\nThe Number Is Maximum %d: ",n2);
    }
    getch();
    return 0;
}

