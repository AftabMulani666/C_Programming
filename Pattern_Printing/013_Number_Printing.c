#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,cnt;
    printf("Input The Numbers");
    scanf("%d",&cnt);
    for(i=1;i<=cnt;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;
}
