#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){

time_t t;
srand((unsigned)time(&t));

int choosen_number;
int lucky_number = rand() % 20+1;

while (true)
{
    printf("Guess the lucky number = ");
    scanf("%d",&choosen_number);
    // printf("lucky number was = %d\n",lucky_number);


    if (lucky_number==choosen_number)
    {
        printf("Congratulation! You have choose the correct number\n");
        break;
    }
}

    return 0;
}