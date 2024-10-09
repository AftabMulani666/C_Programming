#include<stdio.h>
#include<conio.h>

int main()
{
    int No1=0,No2=10;
    printf("\n The Number From 0-10 :");
    while(No1<=10)
    {
        printf("\n %d",No1);
        No1++;
    }
    printf("\n The Number From 10-0 :");
    while(No2>=0)
    {
        printf("\n %d",No2);
        No2--;
    }
    getch();
    return 0;
}
