#include <stdio.h>

#include "../goto.h"

void sb_h2();

void start() {
    printf("Startlobby\n");
    GOTO(sb_h2);
}