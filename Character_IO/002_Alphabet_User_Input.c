#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    char ch='\0',spt='\0',ept='\0';
    printf("\nEnter The Starting Alphabet Range:");
    scanf("%c",&spt);
    fflush(stdin);
    printf("\nEnter The Ending Alphabet Range:");
    scanf("%c",&ept);
    for(ch =spt;ch<=ept;ch++)
    {
        printf("\n%c",ch);
    }
    getch();
    return 0;
}
//Thanks 
