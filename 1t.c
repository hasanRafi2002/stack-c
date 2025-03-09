#include <stdio.h>

int main(){

int i;


//// Sample-1
for ( i = 1; i <=5 ; i++)
{
    printf("%d Rafi\n",i);
}


//// Sample-2
for (int i = 1; i <= 100; i++){

    if (i%2==0) {
        printf("%d is even\n",i);
    }else {
        printf("%d is odd\n",i); 
    }
}



    return 0;
}