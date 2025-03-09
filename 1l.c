#include <stdio.h>

int main(){
    
// Unary Operator

int a = 10;

int result1 = a + a++ + a++;   //  10 + 10 + 11       here value execute after update
printf("a = %d\n", a);
printf("post increment result = %d\n", result1);

a=10;

int result2 = a + ++a + ++a;   //  10 + 11 + 12       here value execute before update
printf("a = %d\n", a);
printf("pre increment result = %d\n", result2);




    return 0;
}