#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
   int fee;
   char  ch;
   char  a;
    printf("*****-Welcome-******");
    printf("\nWhich Stream Do You Want : \n 1> Science \n 2> Commerce \n 3> Arts\n");
     ch = getchar();
    if (ch=='s' || ch=='S')
    {
        printf("You Have Selected Science Stream");
        printf("\n There Are Following Subjects For The Science Stream");
        printf("\n Complusory Subjects \n 1> English \n 2> Marathi \n 3>Physics \n 4>Chemistry \n  ");
        printf("\n Optional Subjects \n 1> Maths \n 2> Biology \n 3>Geology \n ");
        printf("\nSelect One Or More Optional Subjects For Further Process\n");
        getchar();
    }
    else if(ch=='c' || ch=='C')
    {
        printf("You Have Selected Commerce Stream");
        printf("\n There Are Following Subjects For The Commerce Stream");
        printf("\n Complusory Subjects \n 1> English \n 2> Economics \n 3>Business Studies \n 4>Mathematics\n  ");
        printf("\n Optional Subjects \n 1> Physical Education(PE) \n 2> Home Science \n 3>Informatics Practices \n ");
        printf("\nSelect One Or More Optional Subjects For Further Process\n");
        getchar();
    }
    else if(ch=='a' || ch=='A')
    {
        printf("You Have Selected Arts Stream");
        printf("\n There Are Following Subjects For The Arts Stream");
        printf("\n Complusory Subjects \n 1>Geography  \n 2> Marathi \n 3>Hindi \n 4>Political Science \n  ");
        printf("\n Optional Subjects \n 1> Computer science \n 2> Sociology \n 3>Economics \n ");
        printf("\nSelect One Or More Optional Subjects For Further Process\n");
        getchar();
    }
    else
    {
        printf("Thank You For Visting The College");
        getchar();
    }
    fflush(stdin);
     ch = getchar();
    if (ch=='m' || ch=='M' || ch=='b' || ch=='B' || ch=='g' || ch=='G')
    {
        printf("\nYou Have Selected All The Groups");
        printf("\nThe Following Is The Fee Structure For Above Groups");
        printf("\n 1> Admission Fee : 9850/- \n 2> Uniform : 2000/- \n Total : 11850/- ");
        printf(" Are Your Confirm For The Admission(Please Use Y/y For Yes, N/n For NO)\n");
        getchar();
    }
   else if(ch=='p' || ch=='P' || ch=='h' || ch=='H' || ch=='i' || ch=='I')
    {
       printf("\nYou Have Selected All The Groups");
       printf("\nThe Following Is The Fee Structure For Above Groups");
       printf("\n 1> Admission Fee : 4757/- \n 2> Uniform : 2000/- \n Total : 6757/- ");
       printf(" Are Your Confirm For The Admission (Please Use Y/y For Yes, N/n For NO)\n");
       getchar();
    }
   else if(ch=='c' || ch=='C' || ch=='z' || ch=='Z' ||  ch=='e' || ch=='E')
   {
       printf("\nYou Have Selected All The Groups");
       printf("\nThe Following Is The Fee Structure For Above Groups");
       printf("\n 1> Admission Fee : 2500/- \n 2> Uniform : 2000/- \n Total : 4500/- ");
       printf(" Are Your Confirm For The Admission(Please Use Y/y For Yes, N/n For NO)\n");
       getchar();
   }
   else
    {
        printf("You Have Selected None Of These Subjects");
        getchar();
    }
   fflush(stdin);
   ch = getchar();
   up:
   if (ch=='y' || ch=='Y')
   {
       printf("\nCongratulations Your Admission Has Been Confirmed\n");
       getchar();
   }
   else if(ch=='n' || ch=='N')
   {
        printf("We Are Sorry To Say That You Have Cancelled The Admission Process\n");
        getchar();
   }
   else
   {
        printf("\nInvalid Input");
        getchar();
        goto up;
   }
    getch();
    return 0;
}
