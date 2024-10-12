//////////////////////////////////////////////
//  Date :- 12/10/24                        //
//  Author :- Aftab Mulani                  //
//  Probelm :- Area Of Circle               //
//                                          //
//                                          //
//////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    float Area=0.0,Radius=0,PI=3.14;
    printf("Enter The Radius Of Circle : ");
    scanf("%f",&Radius);

    Area = PI * Radius * Radius;
    printf("The Area Of Circle is %f ",Area);

    getch();
    return 0;
}
