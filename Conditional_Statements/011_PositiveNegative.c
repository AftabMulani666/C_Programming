#include<stdio.h>
#include<conio.h>

int main()
{
    int no;
    printf("Enter The Number");
    scanf("%d",&no);

    if(no==0)
    {
        printf("The Number Is Neutral");
    }
    else if(no>0)
    {
        printf("The Number Is Positive");
    }
    else
    {
        printf("The Number Is Negative");
    }
    getch();
    return 0;
}
