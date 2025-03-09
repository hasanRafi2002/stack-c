#include <stdio.h>

int main(){

char ch;

printf("Enter your character - ");
scanf("%c",&ch);

if (ch>=48 && ch<=57)
{
    printf("%c is a number\n",ch);
}else if (65<=ch && ch<=90)
{
    printf("%c is a Uppercase letter\n",ch);
}else if (97<=ch && ch<=122)
{
    printf("%c is a Lowercase letter\n",ch);
}else{
    printf("%c is a special character\n",ch);
}

//////

 if (ch>='A' && ch<='Z')
 {
    printf("The Lowercase of %c is - %c\n", ch, ch+32);
 }else
 {
    printf("The Uppercase of %c is - %c\n", ch, ch-32);
 }
 



    return 0;
}