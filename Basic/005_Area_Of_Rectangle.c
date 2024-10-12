//////////////////////////////////////////////
//  Date :- 12/10/24                        //
//  Author :- Aftab Mulani                  //
//  Probelm :- Area Of Rectangle            //
//                                          //
//                                          //
//////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    float Area=0.0,Width=0,Height=0;;
    printf("Enter The Width Of Rectangle : ");
    scanf("%f",&Width);
    fflush(stdin);
    printf("Enter The Height Of Rectangle : ");
    scanf("%f",&Height);

    Area = Width * Height;
    printf("The Area Of Rectangle is %f ",Area);

    getch();
    return 0;
}
