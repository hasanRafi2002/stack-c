#include <stdio.h>

int main(){


// For storing string type data

char name[30] = "Md Tawhid Hasan Rafi";
printf("%s\n", name);


char my_name[30];

printf("What is your name?\n");
scanf("%s",&my_name);
printf("Thank you %s\n",my_name);

    return 0;
}