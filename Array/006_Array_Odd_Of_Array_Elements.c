#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define count 8

int main()
{
    int Arr[count]={};
    int i=0,ocnt=0;
    for(i=0;i<count;i++)
    {
        printf("Enter The Price Of Bill %d :",i);
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<count;i++)
    {
        if(Arr[i]%2==1)
        {
            ocnt++;
        }
    }
    printf("The Odd In Bills : %d",ocnt);
    getch();
    return 0;
}


