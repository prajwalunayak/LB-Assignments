#include <stdio.h>

void PrintEvenNo(int j)
{
    if(j <= 0)
    {
        return;
    }
    int icnt = 0;
     int num = 2;  
   
    for(icnt=0;icnt<j;icnt++)
    {
        printf("%d ", num);

        num +=2;
    }
}

int main() {
   int i = 0;
  printf("enter no \n ");
  scanf("%d", &i);
   PrintEvenNo(i);

    return 0;
}