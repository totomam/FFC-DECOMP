#include "ffc/types.h"

typedef int (*meth_t)(void *, void *);

int func_ov002_021ae224(void *a, uint8_t *b) {
    void **obj = *(void ***)(b + 0x128);
    meth_t m = (meth_t)((void **)*obj)[4];
    return m(a, obj);
}
