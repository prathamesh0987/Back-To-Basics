#include<stdio.h>

void main(){  
  float fahr,celcius,lower,upper,step;
  lower=0;
  upper=300;
  step=20;
  fahr=lower;
  printf("%s\n","Celcius To Farenheit");
  printf("%7s %9s\n","Celcius","Farenheit");
  while (fahr<=upper) {   
    celcius=5.0*(fahr-32.0)/9.0;
    printf("%3.0f %9.1f\n",fahr,celcius);
    fahr=fahr+step;

  }
}
