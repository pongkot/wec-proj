#include <stdio.h>
#include <stdlib.h>

int singleLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf("-");
        count++;
    }
}

int doubleLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf("=");
        count++;
    }
}

int starLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf("*");
        count++;
    }
}

int vLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf(" | ");
        count++;
    }
}

int slashLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf("/");
        count++;
    }
}

int bslashLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf("\\");
        count++;
    }
}

int plusLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf("+");
        count++;
    }
}

int wLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf("~");
        count++;
    }
}

int hashLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf("#");
        count++;
    }
}

int leftLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf("<");
        count++;
    }
}

int rightLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf(">");
        count++;
    }
}

int commaLine(length){
    int limit, count;
    count = 0;
    limit = length;

    while(count < limit){
        printf(":");
        count++;
    }
}
