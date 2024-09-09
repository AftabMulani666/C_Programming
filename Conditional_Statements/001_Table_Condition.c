#include<stdio.h>
#include<conio.h>

int main()
{
    int n1,n2=1;
    printf("Enter The Multiplication Number");
    scanf("%d",&n1);
    up:
    if(n2<=10)
    {
        printf("\n %d X %d =%d",n1,n2,n1*n2);
        n2++;
        goto up;
    }
    getch();
    return 0;
}


