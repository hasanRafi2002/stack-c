
#include <stdio.h>
#include <stdbool.h>

int main(){

bool is_logged_in = true;

if (is_logged_in)
{
    printf("User logged in\n");
}
else
{
    printf("User logger out\n");
}


printf("is_logged_in / true = %d\n",is_logged_in );



    return 0;
}