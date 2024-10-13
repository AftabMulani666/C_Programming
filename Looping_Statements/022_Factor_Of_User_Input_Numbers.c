#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,i=0;
    printf("Enter A Number :");
    scanf("%d",&No);

    for(i=No;i>=1;i--)
    {
        No%i==0;
        printf(" %d ",i);
    }
    getch();
    return 0;
}
