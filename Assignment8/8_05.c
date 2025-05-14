#include<stdio.h>
 double SqMtr(int iSqFt)
{
    double dSqm = 0;
   
    dSqm = ((double)iSqFt) * (0.0929);

 return dSqm;
}
   


int main()
 {
     int iVal = 0;
 double dRet = 0;
 printf("Enter area in sq ft ; \n");
scanf("%d", &iVal);
 dRet = SqMtr(iVal);
printf("Area in sq mtr is: %lf", dRet);
return 0;
 }