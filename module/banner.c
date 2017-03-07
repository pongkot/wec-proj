#include <stdio.h>
#include <stdlib.h>

void promotion(){
    int i;
    i = 0;
    srand(time());
    char *list[12] = {"Prom 0",
                        "Prom 1",
                        "Prom 2",
                        "Prom 3",
                        "Prom 4",
                        "Prom 5",
                        "Prom 6",
                        "Prom 7",
                        "Prom 8",
                        "Prom 9",
                        "Prom 10",
                        "Prom 11"};

    switch(rand() % 12){
        case 0 : printf("%s", list[0]); break;
        case 1 : printf("%s", list[1]); break;
        case 2 : printf("%s", list[2]); break;
        case 3 : printf("%s", list[3]); break;
        case 4 : printf("%s", list[4]); break;
        case 5 : printf("%s", list[5]); break;
        case 6 : printf("%s", list[6]); break;
        case 7 : printf("%s", list[7]); break;
        case 8 : printf("%s", list[8]); break;
        case 9 : printf("%s", list[9]); break;
        case 10 : printf("%s", list[10]); break;
        case 11 : printf("%s", list[11]); break;
        default : break;
    }
}
