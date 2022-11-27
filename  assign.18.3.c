#include <stdio.h>
int main()
{

int x;

 printf("enter the month number\n"); 
 scanf("%d",&x);
 if(x%2==0 && x!=2)
 printf("the no of days are 30");
 else if(x%2!=0 && x!=2)
 printf("the number of days are 31" );
 else
 printf("the number of days are 28");
 
 
 
 
    return 0;
}
