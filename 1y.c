#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(){

time_t t;
srand((unsigned)time(&t));

int choosen_number , chance =3;
int lucky_number = rand() % 20+1;
bool is_loss = true;

do{
    printf("Guess the lucky number(%d) = ",chance);
    scanf("%d",&choosen_number);



    if (lucky_number==choosen_number)
    {
        printf("Congratulation! You have choose the correct number\n");
        is_loss = false;
        break;
    }

    if (choosen_number<lucky_number)
    {
        printf("Your choosen number was small\n");
    }else
    {
        printf("Your choosen number was big\n");
    }
    

    chance--;
}while (chance>0);


if (is_loss)
{
    printf("You have lose! The lucky number was = %d\n",lucky_number);
}

    return 0;
}