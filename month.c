#include<stdio.h>
int main()
{
int mth,num_days,days;

printf("enter the number of days");
scanf("%d",num_days);

mth=(num_days)/30;
days=(num_days)-(mth*30);

printf("the number of month is:%d",mth);
printf("the remaining number of days are:%d",days);

return 0;
}
