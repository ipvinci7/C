#include <stdio.h>
double add(double x,double y);
double sub(double x,double y);
double mul(double x,double y);
double div(double x, double y);
int main()
{
     double num1,num2,result;
     int operation;
     operation = 0;
     printf("Choose the operation you want to carry out\n");
     printf("1: Addition\n");
     printf("2: Subtraction\n");
     printf("3: Multiplication\n");
     printf("4: Division\n");
     scanf("%d",&operation);
     printf("Enter the first number\n");
     scanf("%lf",&num1);
     printf("Enter the second number\n");
     scanf("%lf",&num2);
     printf("The both numbers are %.2lf and %.2lf \n",num1,num2);
     switch (operation)
     {
     case 1:
         result = add(num1,num2);
         printf("The result is %.2lf",result);
        break;
     case 2:
        result = sub(num1,num2);
        printf("The result is %.2lf",result);
        break;
     case 3:
        result = mul(num1,num2);
        printf("The result is %.2lf",result);
        break;
    case 4:
         result = div(num1,num2);
         printf("The result is %.2lf",result);
     default:
        break;
     }
     return 0;
}

double add(double x, double y)
{
     return x+y;
}
double sub(double x,double y)
{
    return x-y;
}
double mul(double x,double y)
{
    return x*y;
}
double div(int x, int y)
{
    double rem;
    double di;
    double result;
    di = x/y;
    rem = x % y;
    return di + rem;
}
        