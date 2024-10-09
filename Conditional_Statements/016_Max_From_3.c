#include<stdio.h>
#include<conio.h>

int main()
{
    int n1=0,n2=0,n3=0;
    printf("Enter The Number 1:");
    scanf("%d",&n1);
    printf("Enter The Number 2:");
    scanf("%d",&n2);
    printf("Enter The Number 3:");
    scanf("%d",&n3);

    if(n1>n2>n3)
    {
        printf("The Maximum Is %d",n1);
    }
    else if(n1<n2>n3)
    {
         printf("The Maximum Is %d",n2);
    }
    else
    {
         printf("The Maximum Is %d",n3);
    }
    getch();
    return 0;
}
