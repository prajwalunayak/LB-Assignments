#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
   // char ch = 'A';
   for(i=1;i<=iRow;i++)
   {
    for(j=1;j<=iCol;j++)
    {
        printf("%d\t",i);
    }
    printf("\n");
   }
}

int main()
{
    int iVal1 = 0, iVal2 = 0;

    printf("Enter no of rows: ");
    scanf("%d", &iVal1);

    printf("Enter no of columns: ");
    scanf("%d", &iVal2);

    Pattern(iVal1, iVal2);

    return 0;
}