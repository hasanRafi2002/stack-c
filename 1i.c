#include <stdio.h>
#include <stdbool.h>

int main(){

int a = 30;
int b = 35;


bool a_is_greater = a>b;
bool a_is_smaller = a<b;
bool a_is_b = a==b;
bool a_is_not_b = a!=b;

printf("a is greater than b = %d\n",a_is_greater );
printf("a is smaller than b = %d\n",a_is_smaller );
printf("a is b = %d\n",a_is_b );
printf("a is not b = %d\n", a_is_not_b );


    return 0;
}