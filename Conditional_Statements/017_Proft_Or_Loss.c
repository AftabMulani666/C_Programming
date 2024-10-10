#include<stdio.h>
#include<conio.h>

int main()
{
    int B=0,S=0,T=0;
    printf("Enter The Buy Price :");
    scanf("%d",&B);
    printf("Enter The Sell Price :");
    scanf("%d",&S);

    if(B==S)
    {
        printf("You Have Neither Profit Nor Loss");
    }
    else if(B<S)
    {
        T=S-B;
        printf("You Have Booked %d Of Profit",T);
    }
    else
    {
        T=B-S;
        printf("You Have Booked %d Of Loss",T);
    }
    getch();
    return 0;
}
