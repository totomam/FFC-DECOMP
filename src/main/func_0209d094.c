#include "ffc/types.h"

extern int func_02092948(void *x, void *y);

int func_0209d094(void *a, void *b) {
    if (a == b || func_02092948(((void **)a)[1], ((void **)b)[1]) == 0) {
        return 1;
    }
    return 0;
}
