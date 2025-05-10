#include <stdio.h>

void Display(int j){
  //  int icnt = 0;
    while(j>0)
    {
        printf("*");
        j--;
    }
}

int main() {
   int i = 0;
  printf("enter no ");
  scanf("%d", &i);
   Display(i);

    return 0;
}