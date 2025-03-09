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

while (chance>0)
{
    printf("Guess the lucky number(%d) = ",chance);
    scanf("%d",&choosen_number);



    if (lucky_number==choosen_number)
    {
        printf("Congratulation! You have choose the correct number\n");
        is_loss = false;
        break;
    }

    chance--;
}


if (is_loss)
{
    printf("You have lose! The lucky number was = %d\n",lucky_number);
}

    return 0;
}