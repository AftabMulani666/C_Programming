#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0,i=0,sum=0;

    for(i=0;i<=10;i++)
    {
       printf("Enter The Number : ");
       scanf("%d",&No);
       if(No<=0)
       {
           break;
       }
       else
       {
           sum+=No;
       }
    }
    printf("The Sum is %d ",sum);
    getch();
    return 0;
}
