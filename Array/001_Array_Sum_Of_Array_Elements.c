#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define count 8

int main()
{
    int Arr[count]={};
    int i=0,zcnt=0;
    for(i=0;i<count;i++)
    {
        printf("Enter The Price Of Bill %d :",i);
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<count;i++)
    {
        if(Arr[i]==0)
        {
            zcnt++;
        }
    }
    printf("The Sum Of Bills is : %d",zcnt);
    getch();
    return 0;
}
