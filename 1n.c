#include <stdio.h>

int main(){

char c = 5;
int i = 5;
short s = 5;
long l = 5;
long long ll =5;

// here result are in byte formate....... 1 byte = 8 bit
printf("Size of Char = %d\n",(int)sizeof(c));
printf("Size of Int = %d\n",(int)sizeof(i));
printf("Size of Short = %d\n",(int)sizeof(s));
printf("Size of Long = %d\n",(int)sizeof(l));
printf("Size of Long Long = %d\n",(int)sizeof(ll));


    return 0;
}