#include <stdio.h>

void Display(int num, int freq)
{
    int icnt = 0;
    for(icnt = 0; icnt < freq; icnt++)
    {
        printf("%d ", num);
    }
}

int main() {
   int i = 0;
   int j = 0;

   printf("Enter number: ");
   scanf("%d", &i);

   printf("Enter frequency: ");
   scanf("%d", &j);

   Display(i, j);

   return 0;
}