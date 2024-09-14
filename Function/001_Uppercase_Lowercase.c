#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    printf("\n Enter The Alphabet \n");
    scanf("%c",&ch);

    if( ch>='A' &&  ch<='Z')
    {
        printf("\nThe Alphabet Is Uppercase");
    }
   else if(ch>='a' && ch<='z')
    {
       printf("\nThe Alphabet Is Lowercase");
    }
   else
    {
      printf("\nThe Given Input Is Not a Alphabet");
    }
    getch();
    return 0;
    }
