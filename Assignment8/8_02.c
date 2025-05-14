#include<stdio.h>
float RectangleArea(float fNo1, float fNo2)
{
    double dArea = 0;
    dArea = fNo1 * fNo2;
    return dArea;
}

int main()
{
float fVal1 = 0.0;
float fVal2 = 0.0;
double dRet = 0.0;


printf("Enter Width: \n");
scanf("%f", &fVal1);
printf("Enter Height: \n");
scanf("%f", &fVal2);
dRet = RectangleArea(fVal1,fVal2);
printf("Area of Rectangle is: %.3lf", dRet);
return 0;
}
