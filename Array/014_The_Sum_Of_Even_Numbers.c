#include<stdio.h>
#include<conio.h>
#define size 10
int main()
{
  int i=0,Arr[size]={},sum=0;
  for(i=0;i<=size;i++)
  {
      printf("Enter The Number :");
      scanf("%d",&Arr[i]);
  }
  for(i=0;i<=size;i++)
  {
      if(Arr[i]%2==0)
      {
          sum+=Arr[i];
      }
  }
  printf("\nThe Sum Of Even Numbers : %d",sum);
  getch();
  return 0;
}
//Thanks
