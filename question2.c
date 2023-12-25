//temperature conversion from celcius to fahrenheit
#include<stdio.h>
float main(){
float c;

printf("enter the temp. in celcius:");
scanf("%f",&c);
float f=c*(9.0/5.0)+32;
printf("temp. in fahrenheit is:%f",f);

    return 0;
}