// #include <stdio.h>
// int main(){
//     printf("Hello World\n");
//     printf("my name is rafi\n");
//     printf("%d\n", 4+6);
//     printf("%d\n", 5/8);
//     printf("%f\n", 17./8);    // in "%f" floating for working the divition operation ( / ) we have to write number.0 or number.  
//     printf("%i\n", 17/8);
//     printf("%d\n", 19/8);

// float pi = 3.14159265359;

// printf ("%f\n", pi);

// // printf("%d\n", pi );     //float type can not be defined with %d... 




//     return 0;
// }






#include <stdio.h> 

int main() {
    int x, y;

    printf("Enter a number x:\n");
    scanf("%d", &x);

    printf("Enter a number y:\n");
    scanf("%d", &y);

    int sum = x + y;
    int sub = x - y;
    int mul = x * y;

    if(x == y) {
        printf("The two numbers are equal.\n");
    }

    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);

    return 0;
}

















