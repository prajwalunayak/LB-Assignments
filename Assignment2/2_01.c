#include <stdio.h>

void Display(int j){
    int icnt = 0;
    while(icnt<j)
    {
        printf("*");
        icnt++;
    }
}

int main() {
   int i = 0;
  printf("enter no ");
  scanf("%d", &i);
   Display(i);

    return 0;
}