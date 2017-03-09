#include <stdio.h>
#include <stdlib.h>

int main()
{
    int select,check,input_check,main_loop;
    check = 0;
    main_loop = 0;

    while(main_loop < 2){
        system("cls");
        header();
        newLine(2);
        menu();
        newLine(2);
        doubleLine(100);
        newLine(2);

        /*
            check error
        */
        while(check < 1){
            printf("input = ");
            scanf("%d", &input_check);
            if( input_check > 0 && input_check <= 5){
                check = 1;

            } else {
                printf("Error ! Please insert number 1-5\n");
                input_check = 0;
            }
        }

        check = 0;

        loop_selector(input_check);

        getch();

    }
    return 0;
}
