#include<stdio.h>
 void NonFact(int iNo)
{
    int iCnt = 0;
   // int iMult = 1;
for(iCnt = 1; iCnt<=iNo; iCnt++)
{
       if(iNo % iCnt != 0)
       {
          //  iMult = iMult * iCnt;
          printf("%d ", iCnt);
        }
}
   
}

int main()
 {
     int iValue = 0;
// int iRet = 0;
 printf("Enter number ; \n");
scanf("%d", &iValue);
  NonFact(iValue);
//printf("%d", iRet);
return 0;
     
 }