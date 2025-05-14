#include<stdio.h>
 int KMtoMtr(int iNo)
{
    int iCnt = 0;
   
    iCnt = 1000 * iNo;

 return iCnt;
}
   


int main()
 {
     int iValue = 0;
 int iRet = 0;
 printf("Enter distance in KM ; \n");
scanf("%d", &iValue);
 iRet = KMtoMtr(iValue);
printf("Distance in meters; %d", iRet);
return 0;
     
 }
