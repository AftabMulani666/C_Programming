#include <stdio.h>
int main()
{
    int subject;
    printf("Enter your subject\n");
scanf("%d",&subject);
printf("Your Selected Subject %d\n",subject);
if (subject==1)
{
    printf("You Got 45 Rupees Worth Prize\n");
}
else if (subject==2)
{
    printf("You Got 15 Rupees Worth Prize\n");
}
else if(subject==3)
{
    printf("You Got 10 Rupees Worth Prize\n");
}
    return 0;
}
