#include <stdio.h>
#include <stdlib.h>

void menu(){
    int i;

    char *item[] = {"[1] Show Times",
                    "[2] Buy Tickets",
                    "[3] Staff",
                    "[4] Help",
                    "[5] exit"};

    for(i=0;i<5;i++){
        newTab(3);
        printf("%s\n",item[i]);
    }

}
