#include<stdio.h>
#include<conio.h>

int main()
{
    char ch='\0';
    printf("\nEnter The Alphabet To Convert It Into Lowercase:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        printf("The Alpahbet is Converted Into Lowercase : %c",ch);
    }
    else
    {
        printf("The Alpahbet is Not a Lowercase (Hence Not Converted)");
    }
    getch();
    return 0;
}

//Thanks 

