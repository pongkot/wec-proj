#include <stdio.h>
#include <stdlib.h>

int main()
{
    int select;

    header();
    newLine(2);
    menu();
    newLine(2);
    doubleLine(100);
    newLine(2);
    printf("Select your menu = ");
    scanf("%d", &select);
    loop_selector(select);
    return 0;
}
