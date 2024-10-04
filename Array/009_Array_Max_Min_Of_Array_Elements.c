#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define count 8

int main()
{
    int Arr[count]={};
    int i=0,Max=0,Min=0;
    for(i=0;i<count;i++)
    {
        printf("Enter The Price Of Bill %d :",i);
        scanf("%d",&Arr[i]);
    }
    Max=Arr[0];
    Min=Arr[0];
    for(i=0;i<count;i++)
    {
        if(Arr[i]>Max)
        {
            Max=Arr[i];
        }
        if(Arr[i]<Min)
        {
            Min=Arr[i];
        }
    }
    printf("\nThe Max In Bills is : %d",Max);
    printf("\nThe Min In Bills is : %d",Min);
    getch();
    return 0;
}





