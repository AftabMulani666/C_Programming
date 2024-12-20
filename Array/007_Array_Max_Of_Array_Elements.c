#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define count 8

int main()
{
    int Arr[count]={};
    int i=0,Max=0;
    for(i=0;i<count;i++)
    {
        printf("Enter The Price Of Bill %d :",i);
        scanf("%d",&Arr[i]);
    }
    Max=Arr[0];
    for(i=0;i<count;i++)
    {
        if(Arr[i]>Max)
        {
            Max=Arr[i];
        }
    }
    printf("\nThe Max In Bills is : %d",Max);
    getch();
    return 0;
}
//Thanks


