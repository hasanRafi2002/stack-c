#include <stdio.h>
#include <stdbool.h>

int main(){

    bool has_nid = false;
    bool has_passport = true;
    bool is_adult = true;

    bool has_identity = has_passport || has_nid;
    bool has_permission = has_nid && is_adult;
    bool has_account = (has_passport || has_nid) && is_adult;         // has_identity && is_adult;
    bool can_stay = !((has_passport || has_nid) && is_adult);


    printf(" Identity = %d\n", has_identity);
    printf(" Is Permitted = %d\n", has_permission);
    printf(" Create Account = %d\n", has_account);
    printf(" Can Stay = %d\n", can_stay);




    return 0;
}