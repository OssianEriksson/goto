#include <stdlib.h>
#include <stdio.h>

void (*g_fcn)() = NULL;

void start();

int main() {
    printf("Nytt spel\n");

    start();

    while (g_fcn != NULL) {
        void (*fcn)() = g_fcn;
        g_fcn = NULL;
        fcn();
    }

    printf("Spelet är över\n");

    return 0;
}