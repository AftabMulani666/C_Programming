
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define count 8

int main()
{
    int Arr[count]={};
    int i=0,Min=0;
    for(i=0;i<count;i++)
    {
        printf("Enter The Price Of Bill %d :",i);
        scanf("%d",&Arr[i]);
    }
    Min=Arr[0];
    for(i=0;i<count;i++)
    {
        if((Arr[i]<Min) )
        {
            Min=Arr[i];
        }
    }
    printf("\nThe Min In Bills is : %d",Min);
    getch();
    return 0;
}

//Thanks


