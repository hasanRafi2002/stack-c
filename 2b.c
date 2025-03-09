#include <stdio.h>

int main(){

int i, j, rows = 5, stars, spaces;
stars = 1;
spaces = rows-1;

for (int i = 1; i < rows*2; i++){

    for (int j = 1; j <= spaces; j++){
    
        printf(" ");
    }

    for (int j = 1; j < stars*2; j++){
    
        printf("*");
    }
    printf("\n");
}


    return 0;
} 