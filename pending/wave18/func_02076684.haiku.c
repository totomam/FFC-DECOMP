#include "ffc/types.h"

typedef struct Obj {
    void **vtbl;
    uint8_t pad[0x84 - sizeof(void **)];
    uint32_t count;
} Obj;

void func_02076684(Obj *p) {
    if (p->count == 0) {
        p->count = p->count + 1;
        ((void (*)(Obj *))p->vtbl[4])(p);
    }
}
