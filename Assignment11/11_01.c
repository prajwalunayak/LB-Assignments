#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iVal = 0;

    printf("Enter no of elements: ");
    scanf("%d", &iVal);

    Pattern(iVal);

    return 0;
}