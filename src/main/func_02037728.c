#include "ffc/types.h"

extern void *data_021395b4;

typedef void (*fn_t)(void *);

void func_02037728(void) {
    void *obj = data_021395b4;
    if (obj == 0) goto out;
    if (obj == 0) goto store;
    {
        void **vt = *(void ***)obj;
        ((fn_t)vt[1])(obj);
    }
store:
    data_021395b4 = 0;
out:
    return;
}
