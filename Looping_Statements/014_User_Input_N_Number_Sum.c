////////////////////////////////////////////////////////////
// Probelm :- Display  Sum Of  Natural Numbers User Input //
// Author :- Aftab Mulani                                 //
// Date :- 24/09/24                                       //
//                                                        //
//                                                        //
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int X,Y=0,A;
    printf("Heres's The  Natural Numbers And Their Sum\n");
    scanf("%d",&A);
    for(X=1;X<=A;X++)
    {
        Y = Y+X;
        printf(" %d ",X);
    }
           printf("\n %d ",Y);
    getch();
    return 0;
}


