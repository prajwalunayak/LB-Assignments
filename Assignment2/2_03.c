#include <stdio.h>

void Display(int j){
    if(j<10){
        printf("Hello");
    }
    else{
        printf("Demo");
    }
}

int main() {
   int i = 0;
  printf("enter no ");
  scanf("%d", &i);
   Display(i);

    return 0;
}