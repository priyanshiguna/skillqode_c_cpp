#include<stdio.h>
int main()
{
          int a=10,b=20,*x,*y,t;

         
          printf("\naddress a:%u",&a);
         
          printf("\naddress b:%u",&b);

          printf("\n before swapping :a=%d b=%d",a,b);
          x=&a;
          y=&b;
      
          t=*y;
          *y=*x;
          *x=t;
	printf("\n value a: %d",b);
	printf("\n value b: %d",a);

          printf("\nafter swapping : a=%d b=%d\n",a,b);
          return 0;
}

 

 