#include <stdio.h>

int main(){

    int a, b;
    float c,d;

printf("Input a number : "); scanf(" %d",&a);
printf("Input another number : "); scanf(" %d", &b);


printf("\nThe summation of the two numbers is : %d + %d = %d\n\n",a,b, a+b );


printf("Input pi and gravitational accelaration value : "); scanf("%f %f", &c,&d);
printf("The pi and gravitational accelaration value is : %f and %f \n",c,d);



    return 0;
}