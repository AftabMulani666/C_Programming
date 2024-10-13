#include<stdio.h>
#include<conio.h>

int main()
{
    int No=0;
    printf("Enter A Number : ");
    scanf("%d",&No);

    if(No<=10)
    {
        printf("Hello");
    }
    else
    {
        printf("World");
    }
    getch();
    return 0;
}
