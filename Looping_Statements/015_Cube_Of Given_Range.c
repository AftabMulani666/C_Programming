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
    int A,i;
    printf("Heres's The  Natural Numbers And Their Sum\n");
    scanf("%d",&A);
    for(i=1;i<=A;i++)
    {
     printf("The CUBE Of %d is %d\n",i,(i*i*i));
    }

    getch();
    return 0;
}



