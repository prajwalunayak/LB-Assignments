
#include<stdio.h>


int MultDigits(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iMult = 1;
 while(iNo>0)
 {
     int iDigit = iNo % 10;
     iMult = iMult * iDigit;

       iNo = iNo/10;
 }
 return iMult;
}

int main()
{
int iValue = 0;
int iRet = 0;
printf("Enter number ; \n");
scanf("%d", &iValue);
iRet = MultDigits(iValue);
printf(" %d ", iRet);

return 0;
}
