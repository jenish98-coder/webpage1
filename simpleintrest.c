#include<stdio.h>
#include<conio.h>
int main()
{
    float p,t,r,i;
    printf("Enter the value of p");
    scanf("%f",&p);
    printf("Enter the value of t");
    scanf("%f",&t); 
    printf("Enter the value of r");
    scanf("%f",&r);
    i=(p*t*r)/100;
    printf("simple intrest=%f",i);
    return 0;
}