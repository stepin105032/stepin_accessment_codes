#include <stdio.h>
#include <stdlib.h>
#include "primeornot.h"
///@file primeornot.c
int main()
{int n;
test_main();

printf("\n \n%d %d",check_prime(7),check_prime(2));
    printf("enter num:");
    scanf("%d",&n);
    if(check_prime(n))
        printf("prime");
    else printf("not prime");
    return 0;
}
