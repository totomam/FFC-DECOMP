#include "ffc/types.h"

extern void func_02060b30(void *object);

void func_02060bf4(void *obj) {
    int i;
    for (i = 0; i < 4; i++) {
        func_02060b30(((void **)obj)[i + 1]);
    }
}
