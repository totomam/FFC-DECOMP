#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02074028(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02074048(void *a, uint32_t b, void *c);
extern void *data_020b8e44;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c81a4;

void func_ov007_021bc3c4(uint8_t *obj)
{
    void *n;
    void *r;

    if (*(void **)(obj + 0xb0) == 0) {
        *(uint8_t *)(obj + 0xb4) = 1;
        n = func_0205681c(0x20);
        if (n != 0) {
            n = func_02074028(n);
        }
        *(void **)(obj + 0xb0) = n;
        func_02056bc0(obj + 0x48, n);
        r = func_02074048(*(void **)(obj + 0xb0), 0xbd2,
                          *(void **)((uint8_t *)*(void **)data_020b8e44 + 0x80));
        func_02056bc0(obj + 0x14, r);
    }
    {
        Pair *d = &data_ov007_021c81a4;
        uint32_t hi = d->b;
        uint32_t lo = d->a;
        *(uint32_t *)(obj + 0xcc) = hi;
        *(uint32_t *)(obj + 0xc8) = lo;
    }
}
