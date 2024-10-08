#include<stdio.h>
#include<conio.h>

int main()
{
    int num=0,fac=1,i=1;
    printf("\nEnter The Number To Find Its Factorial :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    printf("The Factorial Of %d is %d",num,fac);
    getch();
    return 0;
}
