#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';
    printf("Enter The Alphabet :");
    scanf("&c",&ch);

    if(ch= 'a' || 'A' || 'e' || 'E' || 'i' || 'I' || 'o' || 'O' || 'u' || 'U')
    {
        printf("The Alphabet %c Is A Vowel ",ch);
    }
    else
    {
        printf("The Alphabet %c Is  Not A Vowel ",ch);
    }

    getch();
    return 0;
}
