#include <stdio.h>

void DisplayFactor(int j)
{
    int a = 0;
    if(j <= 0)
    {
        j = -j;
    }  
   
    for(a=1;a<=j;a++)
    {
        if(j % a == 0)
        {
            printf("%d ", a);
        }
    }
}

int main() {
   int i = 0;
  printf("enter no \n ");
  scanf("%d", &i);
   DisplayFactor(i);

    return 0;
}