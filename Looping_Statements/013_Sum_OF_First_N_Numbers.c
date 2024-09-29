//////////////////////////////////////////////////////////
// Probelm :- Display  Sum Of First 10 Natural Numbers  //
// Author :- Aftab Mulani                               //
// Date :- 24/09/24                                     //
//                                                      //
//                                                      //
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
    int X,Y=0;
    printf("Heres's The First 10 Natural Numbers\n");
    for(X=1;X<=10;X++)
    {
        Y = Y+X;
    }
           printf(" %d ",Y);
    getch();
    return 0;
}

