#include <stdio.h>

int Divide(int a, int b)
{
    int ans = 0;
    if(b<=0)
    {
        return -1;
    }
    ans = a/b;
    return ans;
}

int main() 
{
   int i = 15, j = 5;
   int r = 0;
   
   r = Divide(i,j);
    printf("Division is %d",r);

    return 0;
}