//program to show that whether the number is the positive or negative
#include<stdio.h>
int main(){
float a;
printf("Enter the number:");
scanf("%f",&a);

if (a>0){
printf("The number is positive");
}
else if (a<0){
printf("The number is negative");
}
else
printf("The number is zero");

return 0;
}