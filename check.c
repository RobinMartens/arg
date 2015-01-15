#include "check.h"

#include <stdio.h>
#include <stdlib.h>
void assert(bool cond, const char *msg) {
    if (!cond) {
        printf("%s\n", msg);
        exit(1);
    }
}
