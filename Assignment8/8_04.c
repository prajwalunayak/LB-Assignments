#include<stdio.h>
 double KMtoMtr(float fTemp)
{
    double dDeg = 0;
   
    dDeg = ((double)fTemp-32) * (5.0/9.0);

 return dDeg;
}
   


int main()
 {
     float fVal = 0;
 double dRet = 0;
 printf("Enter Temperature in Fahrenheit ; \n");
scanf("%f", &fVal);
 dRet = KMtoMtr(fVal);
printf("Temperature in Degrees is: %lf", dRet);
return 0;
     
 }