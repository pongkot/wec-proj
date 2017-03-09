#include <stdio.h>
#include <stdlib.h>

int loop_selector(n){
    int select;
    select = n;

    switch(select){
        case 1 : printf("Select [1] Show Times\n"); break;
        case 2 : printf("Select [2] Buy Ticket\n"); break;
        case 3 : printf("Select [3] Staff\n"); break;
        case 4 : printf("Select [4] Help\n"); break;
        case 5 : printf("Select [5] Exit\n"); break;
        default : break;
    }
}
