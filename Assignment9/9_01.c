#include<stdio.h>
void DigitDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
 while(iNo>0)
 {
     int iDigit = iNo % 10;
     printf("%d ",iDigit);
     iNo = iNo/10;
 }
}

int main()
{
int iValue = 0;
printf("Enter number ; \n");
scanf("%d", &iValue);
 DigitDisplay(iValue);
return 0;
}