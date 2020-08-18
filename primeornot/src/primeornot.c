#include<stdio.h>

int check_prime(int a)
{
   int c;
   if(a==2)
    return 0;
   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}
