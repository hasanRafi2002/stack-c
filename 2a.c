#include <stdio.h>

int main(){


int i, j, rows=5;

// Half pyramid
for ( i = 0; i < rows; i++)
{
    for (int j = 0; j <= i; j++){
    
        printf( " *");
    }
    printf("\n");
}

printf("\n\nFull-Pyramid\n\n");

// Full pyramid
for ( i = 0; i < rows; i++)
{
    for (int j = i+1; j <= rows; j++){
    
        printf(" ");
    }
    for (int j = 0; j < (2*i)-1; j++){
    printf("*");
        /*CODE HERE*/
    }
    printf("\n");
}


    return 0;
}