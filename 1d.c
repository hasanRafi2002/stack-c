#include <stdio.h>

int main(){

int num1 = 75;

printf("The Decimal value of num1 = %d\n", num1);
printf("The Octalal value of num1 = %o\n", num1);
printf("The Hexadecimal value of num1 = %x\n", num1);
// printf("The Binary value of num1 = % \n", num1);

int oct1 = 043;
int hex1 = 0x1f;

printf("oct1 = decimal->(%d) = octal->(%o) = hexadecimal->(%x)\n",oct1,oct1,oct1);
printf("hex1 = decimal->(%d) = octal->(%o) = hexadecimal->(%x)\n",hex1,hex1,hex1);

    return 0;
}