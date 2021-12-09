#include <stdio.h>
#include <stdlib.h>

#include "../goto.h"

void start(), holt();

void sb_h2() {
    double r = (double) rand() / RAND_MAX;

    printf("Du är i SB-H2!\n");

    GOTO(r < 0.9 ? start : holt);
}