#include<stdio.h>
#include<conio.h>

int main()
{
    int no,temp,dig,sum=0;
    printf("Enter The Number");
    scanf("%d",&no);
    temp=no;
    while(temp>0)
    {
        dig=temp%10;
        sum = sum + dig;
        temp=temp/10;
    }
    printf("The Sum Of %d Is %d",no,sum);
    getch();
    return 0;
}
