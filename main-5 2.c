
#include <stdio.h>

int main()
{
int d,a,b,c,alpha,beta;


printf("enter the coefficient a ,b,c\n");
scanf("%d %d %d",&a,&b,&c);
// d==(b*b)-(4*a*c);


if(d>0)
{
d==(b*b)-(4*a*c);
// alpha== (-b+sqrt(d))/2*a
// beta==(-b-sqrt(d))/2*a
printf("the roots are distinct and real");
}

else if(d<0)
  {
     d==(b*b)-(4*a*c);
      printf("the roots are imag");
      
  }
else
 {
     printf("the roots are real and equal");
 }
  
  
  
  
  
  
  
  


    return 0;
}
