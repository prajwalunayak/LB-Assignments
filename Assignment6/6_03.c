#include<stdio.h>
 int MultiFact(int iNo)
{
if(iNo<0)
{
iNo = -iNo;
}
    int iCnt = 0;
    int iMult = 1;
for(iCnt = 1; iCnt<iNo;iCnt++)
{
       if(iNo % iCnt == 0)
       {
            iMult = iMult * iCnt;
        }
}
 return iMult;
   
}

int main()
 {
     int iValue = 0;
 int iRet = 0;
 printf("Enter number ; \n");
scanf("%d", &iValue);
 iRet = MultiFact(iValue);
printf("%d", iRet);
return 0;
     
 }
