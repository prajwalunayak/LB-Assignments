#include<stdio.h>
void MultipleDisplay(int iNo)
{
 int iCnt = 0;
 int iMult = 1;
for(iCnt=1;iCnt<=5;iCnt++)
{
   // iCnt = iCnt * iNo;
    printf("%d ", iNo * iCnt);
}

}

int main()
{
int iValue = 0;
printf("Enter number ; \n");
scanf("%d", &iValue);
 MultipleDisplay(iValue);
return 0;
}
