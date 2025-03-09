#include <stdio.h>

int main(){

int a,b;
char ch = 'c';

while (ch!='q')
{
    printf("Enter two numbers - ");
    scanf("%d %d",&a,&b);
    printf("Addition result is = %d\n",a+b);

    printf("Type c to run again. Type q to quite : ");
    scanf("  %c",&ch);            // here I have write "<space> %c"  ....other wise there will be an error........
}


    return 0;
}