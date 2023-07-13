#include<stdio.h>
int main()
{
  float no1,no2,sum,min,mult,div;
  char equation;
  
  
  scanf("%f""%c""%f", &no1 , &equation , &no2);
  
 
  
  switch(equation)
   {
       case '+':
         sum=no1+no2;
         printf("sum of %f",sum);
         break;
      
       case '-':
         min=no1-no2;
         printf("min of %f",min);
         break;
      
       case '*':
         mult=no1*no2;
         printf("mult of %f",mult);
         break;
      
       case '/':
         div=no1/no2;
         printf("div of %f",div);
         break;
      
        default:
         printf("wrong equation");
    }
  return 0;
}
