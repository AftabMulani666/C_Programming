#include<stdio.h>
#include<conio.h>

int main()
{
     int no =0,temp = 0,dig = 0,zcnt=0;
     printf("\n Enter The Number");
     scanf("%d",&no);
     printf("\n Which Number Should Be Counted");
     scanf("%d",&dig);

     temp = no;
     while(temp > 0)
     {
     dig = temp % 10;
     if(dig <= 0)
     {
      zcnt++;
     }
     temp =temp/10;
     }
          printf("The Count Of Zero Is %d",dig);
     getch();
     return 0;
}
