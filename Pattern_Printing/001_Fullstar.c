#include<stdio.h>
#include<conio.h>

int main()
{
    int R=0,C=0,cnt=0;
    printf("Enter Any Number");
    scanf("%d",&cnt);
        for(R=1;R<=cnt;R++)
    {
        for(C=1;C<=cnt;C++)
        {
        printf(" * ");
        }
        printf("   ");
        printf("\n");
    }
    getch();
    return 0;
}

