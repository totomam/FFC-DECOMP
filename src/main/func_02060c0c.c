#include "ffc/types.h"

extern void func_02060b4c(void *object);

void func_02060c0c(void *obj) {
    int i;
    for (i = 0; i < 4; i++) {
        func_02060b4c(((void **)obj)[i + 1]);
    }
}
