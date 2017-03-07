#include <stdio.h>
#include <stdlib.h>

void header(){
    int maxh;
    maxh = 100;

    /*
        header part
    */
    doubleLine(maxh);
    newLine(2);
    newTab(4);
    printf("WHATEVER CIANIMA CIRY");
    newLine(2);
    singleLine(maxh);

    /*
        promotion part
    */
    newLine(2);
    promotion();
    newLine(2);
    singleLine(maxh);
}
