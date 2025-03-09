#include <stdio.h>

int main(){

// Assignment Operator

int a = 10;

a += 5;  // a = a+5 , here after adding 5 the new value of a = 15;
printf("a =  %d\n", a);
a -= 5;  // a = a-5 , here after substracting 5 from 15 the new value of a is = 10
printf("a =  %d\n", a);
a *= 5;  // a = a*5 , here after multipaling 5 with 10 the new value of a is = 50
printf("a =  %d\n", a);
a /= 5;  // a = a/5 , here after dividing 50 with 5 the new value of a is = 10
printf("a =  %d\n", a);
a %= 5;  // a = a%5 , here 10/5 = 2  and the  = 0
printf("a =  %d\n", a);

    return 0;
}