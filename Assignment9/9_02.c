#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
 while(iNo>0)
 {
     int iDigit = iNo % 10;
    // printf("%d ",iDigit);
     if(iDigit == 0)
     {
         return TRUE;
     }
     iNo = iNo/10;
 }
 return FALSE;
}

int main()
{
int iValue = 0;
BOOL bRet = FALSE;
printf("Enter number ; \n");
scanf("%d", &iValue);
bRet = CheckZero(iValue);
if(bRet == TRUE)
{
    printf("Contains Zero");
}
else
{
     printf("DOES NOT Contain Zero");
}
return 0;
}