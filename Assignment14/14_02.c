#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNum = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i%2 == 0)
        {
            iNum = 1;
        }
        else
        {
            iNum = 2;
        }  
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNum);
            iNum = iNum + 2;
        }
        printf("\n");
    }
}

int main()
{
    int iVal1 = 0, iVal2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iVal1);

    printf("Enter number of columns: ");
    scanf("%d", &iVal2);

    Pattern(iVal1, iVal2);

    return 0;
}
