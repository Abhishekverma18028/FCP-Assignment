//convert temperature from farenheit to celcius
#include<stdio.h>
int main(){
float f;
printf("enter the farenheit temperature:");
scanf("%f",&f);
float c=(f-32)*(5.0/9.0);
printf("temperature in celcius is %f",c);

   return 0;
}