#include "ffc/types.h"

extern void *data_02139450;

typedef void (*fn_t)(void *);

void func_02028b14(void) {
    void *obj = data_02139450;
    if (obj == 0) goto out;
    if (obj == 0) goto store;
    {
        void **vt = *(void ***)obj;
        ((fn_t)vt[1])(obj);
    }
store:
    data_02139450 = 0;
out:
    return;
}
