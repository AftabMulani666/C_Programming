#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define count 8

int main()
{
    int Arr[count]={};
    int i=0,ocnt=0,ecnt=0;
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
        else
        {
            ecnt++;
        }
    }
    printf("\nThe Odd In Bills is : %d",ocnt);
    printf("\nThe Even In Bills is : %d",ecnt);
    getch();
    return 0;
}



