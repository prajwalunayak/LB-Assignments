#include<stdio.h>
void DisplayNo(int iNo)
{
 int iCnt = 0;


for(iCnt=-iNo;iCnt<=iNo;iCnt++)
{
    printf("%d ", iCnt);
}
}

int main()
{
int iValue = 0;
printf("Enter number ; \n");
scanf("%d", &iValue);
 DisplayNo(iValue);
return 0;
}