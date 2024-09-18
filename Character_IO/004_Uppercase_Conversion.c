#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    printf("\nEnter The Alphabet To Convert It Into Uppercase:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        printf("The Alpahbet is Converted Into Uppercase : %c",ch);
    }
    else
    {
        printf("The Alpahbet is Not a Lowercase (Hence Not Converted)");
    }
    getch();
    return 0;
}


