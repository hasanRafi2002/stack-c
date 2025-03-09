#include <stdio.h>

int main(){

int width, height, i, j;

printf("Enter Width and Height - ");
scanf("%d %d",&width ,&height);

for (int i = 0; i < height; i++)
{
    for (int j = 0; j < width; j++)
    {
        printf("* ");
    }
    printf("\n");
}


    return 0;
}