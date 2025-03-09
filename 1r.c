#include <stdio.h>

int main(){

    int year;
    int is_leapyear = 0;

    printf("Enter the Year - ");
    scanf("%d",&year);

if (((year%4==0) && (year%100!=0)) || (year%400==0))
{
    is_leapyear = 1;
}

if (is_leapyear)
{
    printf("%d is a Leapyear\n", year);
}else
{
    printf("%d is not a Leapyear\n", year);
}




// method - 2
int year1;
int is_leapyear1=0;


    printf("Enter the Year - ");
    scanf("%d",&year1);

if (year1%4==0){

    if (year1%100==0){


        if (year1%400==0){
            is_leapyear1=1;
        }else{
            is_leapyear1 = 0;
        }


        }else{
            is_leapyear1 = 1;
        }
        
        }
        
        
        

if (is_leapyear1)
{
    printf("%d is a Leapyear\n", year1);
}else
{
    printf("%d is not a Leapyear\n", year1);
}
    




    return 0;
}