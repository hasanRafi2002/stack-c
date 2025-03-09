#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int picked_number , given_number;
time_t t;

srand((unsigned)time(&t));
picked_number = rand() % 10 + 1 ;

printf("Enter your choosen number - ");
scanf("%d",&given_number);


if (given_number==picked_number)
{
    printf("You win!!!\n");
}else{
    printf("You lose!.. the picked number was - %d\n",picked_number);
}


    return 0;
}