#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    printf("\nEnter The Alphabet To Convert It Into Uppercase/Lowercase :");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        printf("The Alpahbet is Converted Into Uppercase : %c",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        printf("The Alpahbet is Converted Into Lowercase : %c",ch);
    }
    else
    {
        printf("The Given Input Is Not A Alphabet (Hence Not Converted)");
    }
    getch();
    return 0;
}




