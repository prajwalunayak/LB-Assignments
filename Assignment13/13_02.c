#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
   char ch1 = 'A';
   char ch2 = 'a';
   for(i=1;i<=iRow;i++)
   {
     ch1 = 'A';
     ch2 = 'a';
    for(j=1;j<=iCol;j++)
    {
        if(i%2!=0)
        {
            printf("%c\t",ch1);
        ch1++;
        }
        else
        {
            printf("%c\t",ch2);
        ch2++;
        }
        
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