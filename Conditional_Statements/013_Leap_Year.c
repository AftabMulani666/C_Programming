////////////////////////////////////////////////////////
// Probelm :- To Check The Year Is Leap               //
// Arthur :- Aftab Mulani                             //
// Date :- 21/09/24                                   //
//                                                    //
//                                                    //
////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

int main()
{
    int Year;
    printf("Enter The Year :");
    scanf("%d",&Year);

    if(Year%400==0)
    {
        printf("The Year Is Leap Year");
    }
    else if((Year%100)==0)
    {
        printf("The Year Is Not a Leap Year");
    }
    else  if((Year%4)==0)
    {
        printf("The Year Is Leap Year");
    }
    else
    {
       printf("The Given Year Is Not A leap Year");
    }
    getch();
    return 0;
}
