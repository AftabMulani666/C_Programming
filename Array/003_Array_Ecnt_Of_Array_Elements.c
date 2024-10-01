#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define count 8

int main()
{
    int Arr[count]={};
    int i=0,ecnt=0,ele=0;
    for(i=0;i<count;i++)
    {
        printf("Enter The Price Of Bill %d :",i);
        scanf("%d",&Arr[i]);
    }
    printf("Enter The Number To Get The Count Of That Number ");
    scanf("%d",&ele);
    for(i=0;i<count;i++)
    {
        if(Arr[i]==ele)
        {
            ecnt++;
        }
    }
    printf("The Sum Of Bills is : %d",ecnt);
    getch();
    return 0;
}
