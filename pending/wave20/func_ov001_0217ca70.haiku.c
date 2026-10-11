#include "ffc/types.h"

extern int func_ov000_02168bac(void *obj, void *fn, void *args);
extern void func_ov001_0217ca5c(void);

int func_ov001_0217ca70(void *a, void *b, void *c) {
    void *args[3];
    void *obj = *(void **)a;
    args[0] = a;
    args[1] = b;
    args[2] = c;
    if (func_ov000_02168bac(*(void **)((char *)obj + 0x5c8), (void *)func_ov001_0217ca5c, args) != 0) {
        return 0;
    }
    return 1;
}
