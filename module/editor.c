#include <stdio.h>
#include <stdlib.h>

int newLine(time){
    int limit, count;
    count = 0;
    limit = time;

    while(count < limit){
        printf("\n");
        count++;
    }
}

int newTab(time){
    int limit, count;
    count = 0;
    limit = time;

    while(count < limit){
        printf("\t");
        count++;
    }
}
