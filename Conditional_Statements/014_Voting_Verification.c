#include<stdio.h>
#include<conio.h>

int main()
{
    int Age;
    printf("\nEnter The Age:");
    scanf("%d",&Age);

    if(Age==18)
    {
        printf("Congratulations You Are Eligible To Vote");
    }
    else if(Age>18)
    {
        printf("Congratulations You Are Eligible To Vote");
    }
    else
    {
        printf("Sorry You Are Not Eligible To Vote");
    }
    getch();
    return 0;

}

